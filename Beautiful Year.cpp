#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,ans,year;
    cin>>year;
    while(1)
    {
        year++;
        ans=year;
        a=year%10;
        year=year/10;
        b=year%10;
        year=year/10;
        c=year%10;
        year=year/10;
        d=year%10;
        year=year/10;
        if(a!=b &&a!=c && a!=d&&b!=c&&b!=d&&c!=d)
        {
            cout<<ans<<'\n';
            break;
        }
        else
        {
            year=ans;
        }

    }



}
