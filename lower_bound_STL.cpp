#include<bits/stdc++.h>
using namespace std;

#define ll long long int
// lb = lower_bound(arr,arr+n,target)-arr;
// lb = lower_bound(v.begin(),v.end(),target)-v.begin();
// lb (partial lower bound) = lower_bound(arr+starting_index,arr+ending_index+1,target)-starting_index;
int lower_bound_code(vector<ll>&arr,int n,int target)
{
    //smallest index such that arr[mid]>=target
    // target er soman or target er cheye boro element er smallest index
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
    int target;
    cin>>target;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int lb = lower_bound_code(arr,n,target);
    cout<<lb<<endl;
}