#include<bits/stdc++.h>
using namespace std;


int single_element(int arr[], int n)
{
    if(n==1)
    {
        return arr[0];
    }
    int low=0;
    int high = n-1;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(arr[mid]!=arr[mid-1] and arr[mid]!=arr[mid+1])
        {
            return arr[mid];
        }
        else
        {
            int left = mid-low;
            int right = high-mid;
            if(arr[mid]==arr[mid-1])
            {
                left--;
            }
            else
            {
                right--;
            }
            if(left&1)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }

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
    int value = single_element(arr,n);
    cout<<value<<endl;
}
