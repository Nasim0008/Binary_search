#include<bits/stdc++.h>
using namespace std;
int floor(int arr[],int low,int high,int value)
{
    int mid;
    int ans =0;
    while(low<=high)
    {
        mid = (high+low)/2;
        
        if(arr[mid]==value)
        {
            return value;
        }
        else if(arr[mid]<value)
        {
            ans = arr[mid];
            low = mid+1;
        }
        else
        {
            high = mid-1;
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
    int value;
    cin>>value;
    int floor_value = floor(arr,0,n-1,value);
    cout<<floor_value<<endl;
}