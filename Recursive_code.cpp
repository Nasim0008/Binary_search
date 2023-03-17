#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int low,int high,int value)
{
    int mid = low + ((high-low)/2);
    if(arr[mid]==value)
    {
        return mid;
    }
    else if (arr[mid]>value)
    {
        return search(arr,low,mid-1,value);
    }
    else
    {
        return search(arr,mid+1,high,value);
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
    sort(arr,arr+n);
    int value;
    cin>>value;
    int ind = search(arr,0,n-1,value);
    cout<< ind<<endl;
}