#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int lower_bound(ll  arr[],int n,int target)
{
    int low =0;
    int high = n-1;
    int ans = n;
    while(low<=high)
    {
        int mid = low+ (high-low)/2;
        if(arr[mid]>=target)
        {
            ans = mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    ll arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int ans = lower_bound(arr,n,5);
    cout<<ans<<endl;
}