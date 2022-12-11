#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,k;
    cin>>s>>k;
    reverse(k.begin(),k.end());
    if(s==k)
    {
        cout<<"YES"<<'\n';
    }
    else
    {
        cout<<"NO"<<'\n';
    }
}




