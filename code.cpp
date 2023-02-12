#include<bits/stdc++.h>
using namespace std;
bool binary(int arr[],int low,int high,int value)
{

    while(low<=high)
    {
         int mid = (low+high)/2;
        if(arr[mid]==value)
        {
            return true;
        }
        else if(arr[mid]>value)
        {
            high = mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    bool check = binary(arr,0,n--,5);
    if(check==true)
    {
        cout<< "Found"<<endl;
    }
    else if(check==false)
    {
        cout<< "Not Found"<<endl;
    }

}
