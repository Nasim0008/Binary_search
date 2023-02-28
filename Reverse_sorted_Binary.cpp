#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int low, int high,int value)
{
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==value)
        {
            return mid;
        }
        else
        {
            if(arr[mid]<value)
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+4];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<int>());
    int value;
    cin>>value;
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    int check = binary(arr,0,n,value);
    if(check!= -1)
    {
        cout<< "Found"<<endl;
        cout<<"Index : "<<check<<endl;
    }
    else
    {
        cout<< "Not Found"<<endl;
    }
}