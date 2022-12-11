#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,alu=0;
    cin>>x;
    int y[x],z[x];
    for(int i=0; i<x; i++)
    {
        cin>>y[i];
        cin>>z[i];
    }
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(y[i]==z[j])
            {
                alu++;
            }
        }

    }
    cout<<alu;


}
