#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>b>>x;

    if(a>b)
    {
        if(a>x)
        {
            if(b>x)
                cout<<x<<"\n"<<b<<"\n"<<a<<"\n";
            else
                cout<<b<<"\n"<<x<<"\n"<<a<<"\n";

        }
        else
            cout<<b<<"\n"<<a<<"\n"<<x<<"\n";
    }
    else
    {
        if(b>x)
    {
            if(a>x)
               cout<<x<<"\n"<<a<<"\n"<<b<<"\n";
            else
               cout<<a<<"\n"<<x<<"\n"<<b<<"\n";
    }
        else
            cout<<a<<"\n"<<b<<"\n"<<x<<"\n";
    }
    cout<<"\n"<<a<<"\n"<<b<<"\n"<<x<<"\n";

    return 0;
}
