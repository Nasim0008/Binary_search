#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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

int main()
{
    int n;
    cin>>n;
    int  arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mn = minimum_value_in_rotated_sorted_array(arr,n);
    cout<<mn<<endl;
}