#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+4];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    bool check = binary_search(arr,arr+n,5);
    if(check)
    {
        cout<< "Found"<<endl;
    }
    else
    {
        cout<< "Not Found"<<endl;
    }

}
