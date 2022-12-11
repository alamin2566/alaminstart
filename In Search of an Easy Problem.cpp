#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,count=0;
    cin>>x;
    int ar[x];
    for(int i=0; i<x; i++)
    {
        cin>>ar[i];
        if(ar[i]==1)
        {
            count++;
        }

    }
    if(count==0)
    {
        cout<<"EASY"<<'\n';
    }
    else
    {
        cout<<"HARD"<<'\n';
    }
}
