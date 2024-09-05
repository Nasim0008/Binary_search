
#include<bits/stdc++.h>
using namespace std;


// ub = upper_bound(arr,arr+n,target)-arr
// ub = upper_bound(v.begin(),v.end(),target)-v.begin();
// ub(partial upper bound) =  upper_bound(arr+starting_index,arr+ending_index+1,target)-arr;


int upper_bound_code(vector<int>&arr,int n,int target)
{
    // smallest index such that arr[mid]>target
    // target er cheye boro element er smallest index
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]>target)
        {
            ans=mid;
            high=mid-1;
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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ub = upper_bound_code(arr,n,target);
    cout<<ub<<endl;
}
