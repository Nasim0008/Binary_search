#include<bits/stdc++.h>
using namespace std;
int rotation(int arr[],int low,int high)
{
    int  mid;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(mid<high and (arr[mid+1]<arr[mid]))
        {
            return mid+1;
        }
        else if(mid>low and (arr[mid]<arr[mid+1]))
        {
            return mid;
        }
        else if(arr[mid]<arr[high])
        {
            high = mid-1;
            
        }
        else
        {
            low = mid+1;
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
    sort(arr,arr+n);
    int ans = rotation(arr,0,n-1);
    cout<<ans<<endl;
}