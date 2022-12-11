#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0;
    int x;
    cin>>x;
    while(x--)
    {
        int y,j;
        cin>>y>>j;
        if(j-y>=2)
        {
            count++;
        }

    }
    cout<<count<<'\n';



}
