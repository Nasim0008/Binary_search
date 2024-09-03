#include <bits/stdc++.h>
using namespace std;

#define FAST()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define wTC()                         \
    int t;                            \
    cin >> t;                         \
    for (int i = 1; i <= t; i++)      \
    {                                 \
        cout << "Case " << i << ": "; \
        nasim();                      \
    }
#define TC()     \
    int t;       \
    cin >> t;    \
    while (t--)  \
    {            \
        nasim(); \
    }
#define nTC()    \
    int t = 1;   \
    while (t--)  \
    {            \
        nasim(); \
    }

#define endl "\n"
#define ll long long int
#define ull unsigned long long int
const int mod = 1e9 + 7;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define getunique(v)                                  \
    {                                                 \
        sort(v.begin(), v.end());                     \
        v.erase(unique(v.begin(), v.end()), v.end()); \
    }

// bool flag = binary_search(arr,arr+n,target);

bool check(ll arr[],int n,ll target)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]==target)
        {
            return true;
        }
        else if(arr[mid]<target)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
}
int find_index(ll arr[],int n,ll target)
{
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}
// lb = lower_bound(arr,arr+n,target)-arr;
// lb = lower_bound(v.begin(),v.end(),target)-v.begin();
// lb (partial lower bound) = lower_bound(arr+starting_index,arr+ending_index+1,target)-starting_index;
int lower_bound(ll  arr[],int n,int target)
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
// ub = upper_bound(arr,arr+n,target)-arr
// ub = upper_bound(v.begin(),v.end(),target)-v.begin();
// ub(partial upper bound) =  upper_bound(arr+starting_index,arr+ending_index+1,target)-arr;
int upper_bound(ll arr[],int n,int target)
{
    // smallest index such that arr[mid]>target
    // target er cheye boro element er smallest index
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low<=high)
    {
        int mid = low+ (high-low)/2;
        if(arr[mid]>target)
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
ll floor_value(ll arr[],int n,ll target)
{
    //largest element such that arr[mid]<=target
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
    // when return value is -1 then it has no floor value
}
ll ceil_value(ll  arr[],int n,ll target)
{
    //smallest value such that arr[mid]>=target
    int low =0;
    int high = n-1;
    int ans = n;
    while(low<=high)
    {
        int mid = low+ (high-low)/2;
        if(arr[mid]>=target)
        {
            ans = arr[mid];
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return ans;
}
int first_occurence(ll arr[],int n,ll target)
{
    int ans=-1;
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid= low+(high-low)/2;
        if(arr[mid]==target)
        {
            ans = mid;
            high=mid-1;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high= mid-1;
        }
    }
    return ans;
}

int last_occurence(ll arr[],int n,ll target)
{
    int ans=-1;
    int low = 0;
    int high = n-1;
    while(low<=high)
    {
        int mid= low+(high-low)/2;
        if(arr[mid]==target)
        {
            ans = mid;
            low = mid+1;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high= mid-1;
        }
    }
    return ans;
}
int count_occurence(ll arr[],int n,ll target)
{
    int first = first_occurence(arr,n,target);
    int last = last_occurence(arr,n,target);
    int total_occurence = (last-first)-1;
    return total_occurence;
}
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
int find_element_in_rotated_sorted_array(ll arr[],int n, ll target)
{
    //only possible distict element array
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high)
    {
        int mid = low+ (high-low)/2;
        if(arr[mid]==target)
        {
            return mid ;
        }
        // left sorted
        if(arr[low]<=arr[mid])
        {
            //check element is present in left or not
            if(arr[low]<=target and target<=arr[mid])
            {
                high = mid-1;// right part will be eliminated
            }
            else
            {
                low = mid+1;// left part will be eliminated
            }
        }
        else
        {
            if(arr[mid]<=target and target<=arr[high])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
    }
    return ans;
}
bool check_element_in_rotated_sorted_array(ll arr[],int n, ll target)
{
    //it is possibl for distict and duplicate element array both
    int low = 0;
    int high = n-1;

    while(low<=high)
    {
        int mid = low+ (high-low)/2;
        if(arr[mid]==target)
        {
            return true ;
        }
        if(arr[low]==arr[mid] and arr[mid]==arr[high])
        {
            low++;
            high--;
            continue;
        }
        // left sorted
        if(arr[low]<=arr[mid])
        {
            //check element is present in left or not
            if(arr[low]<=target and target<=arr[mid])
            {
                high = mid-1;// right part will be eliminated
            }
            else
            {
                low = mid+1;// left part will be eliminated
            }
        }
        else
        {
            if(arr[mid]<=target and target<=arr[high])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
    }
    return false;
}
int  minimum_value_in_rotated_sorted_array(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    int mn = INT_MAX;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[low]<=arr[high])
        {
            mn = min(mn,arr[low]);
            break;
        }

        if(arr[low]<=arr[mid])
        {
            mn = min(mn,arr[low]);
            low = mid+1;
        }
        else
        {
            mn = min(mn,arr[mid]);
            high = mid-1;
        }

    }
    return mn;
}
int number_of_rotated_value_in_rotated_sorted_array(int arr[],int n)
{
    int low = 0;
    int high = n-1;
    int mn = INT_MAX;
    int index = -1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[low]<=arr[high])
        {
            mn = min(mn,arr[low]);
            if(mn==arr[low])
            {
                index = low;
            }
            break;
        }

        if(arr[low]<=arr[mid])
        {
            mn = min(mn,arr[low]);
             if(mn==arr[low])
            {
                index = low;
            }
            low = mid+1;
        }
        else
        {
            mn = min(mn,arr[mid]);
             if(mn==arr[mid])
            {
                index = mid;
            }
            high = mid-1;
        }

    }
    return index;
}
int square_root(int N)
{
    int low = 1;
    int high = N;
    int ans;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid <= N)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
void nasim()
{
    int n;
    cin >> n;

    if (n != 2 and n % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
int main()
{
    FAST()
    /*
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    */

    nTC();

    // TC();

    // wTC();
}
