#include<bits/stdc++.h>
using namespace std;
int first_occ(int arr[],int low,int high,int value)
{
    int ans;
    while(low<=high)
    {
        int mid= (low+high)/2;
        if(arr[mid]==value)
        {
            ans = mid;
            high=mid-1;
        }
        else if(arr[mid]<value)
        {
            low=mid+1;
        }
        else
        {
            high= mid-1;
        }
    }
    return ans;
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
    int value ;
    cin>>value;
    int index = first_occ(arr,0,n-1,value);
    cout<< index<<endl;
}