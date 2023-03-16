#include<bits/stdc++.h>
using namespace std;
char next_char(string s,char ch)
{
    int low =0 ;
    int high =s.size();
    int mid = 0;
    char ans ;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(s[mid]>ch)
        {
            ans = s[mid];
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
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    char ch;
    cin>>ch;
    char ans = next_char(s,ch);
    cout<<s<<endl;
    cout<<ans<<endl;
}