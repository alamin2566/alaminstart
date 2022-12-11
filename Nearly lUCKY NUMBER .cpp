#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  x;

    cin>>x;
    int m=0;
    while(x)
    {
        if(x%10==4 || x%10==7 )
        {
            m++;


        }
        x/=10;
    }
    if(m==4 || m==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }



}
