#include<bits/stdc++.h>
using namespace std;
#define ll long  long int
ll floor_value(ll arr[],int n,ll target)
{
    int low = 0;
    int high = n-1;
    ll ans=-1 ;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]<=target)
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
    ll arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll ans = floor_value(arr,n,25);
    cout<<ans<<endl;
}