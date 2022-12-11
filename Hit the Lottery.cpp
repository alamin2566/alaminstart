#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    int alu=0;
    cin>>x;
    while(x)
    {
        if(x>=100)
        {
            alu++;
            x=x-100;

        }
        else if(x>=20)
        {
            alu++;
            x=x-20;
        }
        else if(x>=10)
        {
            alu++;
            x=x-10;
        }
        else if(x>=5)
        {
            alu++;
            x=x-5;
        }
        else if(x>=1)
        {
            alu++;
            x=x-1;
        }

    }
    cout<<alu<<'\n';







}
