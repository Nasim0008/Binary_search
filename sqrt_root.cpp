#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sqrt_value ;
    int low =1;
    int high  = n;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(mid*mid <= n)
        {
            sqrt_value = mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout<< sqrt_value<<endl;
}