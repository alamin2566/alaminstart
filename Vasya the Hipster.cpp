#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>y)
    {
        cout<<y<<" ";
    }
    else
    {
        cout<<x<<" ";
    }
    int alu = abs(x-y);
    cout<<alu/2;




}
