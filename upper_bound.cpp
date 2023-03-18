#include<bits/stdc++.h>
using namespace std;
int check(int arr[],int low,int high,int value)
{
    int mid ;
    int uper =0;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]<=value)
        {
            low= (mid+1);
        }
        else if(arr[mid]>value)
        {
            uper= mid;
            high = mid-1;
        }
    }
    return uper;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int value;
    cin>>value;
    int upper_bnd = check(arr,0,n-1,value);
    cout<<"index: "<<upper_bnd<<endl;
}