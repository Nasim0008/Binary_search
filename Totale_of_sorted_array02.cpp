#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    int ans =0;
    int mn=  INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mn = min(arr[i],mn);
        if(mn==arr[i])
        {
            ans=(i);
        }
    }
    cout<<ans<<endl;

}