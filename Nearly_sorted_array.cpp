#include<bits/stdc++.h>
using namespace std;
int near_check(int arr[],int low,int high,int value)
{
    int mid ;
    int ans ;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==value)
        {
            return mid;
        }
        else if((low<=mid-1 )and(arr[mid-1]==value))
        {
            return mid-1;
        }
        else if ((high>=mid+1) and (arr[mid+1]==value))
        {
            return mid+1;
        }
        else if(arr[mid]>value)
        {
            high = mid-2;
        }
        else 
        {
            low = mid+2;
        }
    }
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
    int value;
    cin>>value;
    int ind = near_check(arr,0,n-1,value);
    cout<< ind<<endl;
}