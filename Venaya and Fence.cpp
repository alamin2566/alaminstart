#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,a;
    cin>>x>>y;
    int width=0;
    for(int i=0; i<x; i++)
    {
        cin>>a;
        if(a<=y)
        {
            width++;
        }
        else
        {
            width+=2;
        }
    }
    cout<<width<<'\n';




}
