#include<bits/stdc++.h>
using namespace std;
#define ll long long int
pair<int,int>first_and_last_with_lower_and_upper_bound(ll arr[],int n,ll target)
{
    int lb = lower_bound(arr,arr+n,target)-arr;
    int ub = upper_bound(arr,arr+n,target)-arr;
    if((lb==n) or (arr[lb]!=target))
    {
        return {-1,-1};
    }
    else
    {
        return {lb,ub-1};
    }
}
int main()
{
    int n;
    cin>>n;
    ll arr[n+3];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
   pair<int,int>ans = first_and_last_with_lower_and_upper_bound(arr,n,8);
   cout<<ans.first<< " "<<ans.second<<endl;

}