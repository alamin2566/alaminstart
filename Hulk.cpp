#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=1; i<x; i++)
    {
        if(i%2!=0)
        {
            cout<<"I hate that ";

        }
        if(i%2==0)
        {
            cout<<"I love that ";
        }
    }
    if(x%2!=0)
    {
        cout<<"I hate it";
    }
    if(x%2==0)
    {
        cout<<"I love it";
    }


}
