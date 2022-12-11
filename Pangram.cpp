#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,alu=0;
    cin>>x;
    string j;
    cin>>j;
    for(int i=0; i<x; i++)
    {
        \
        j[i]=towlower(j[i]);
    }
    sort(j.begin(),j.end());
    for(int i=0; i<x; i++)
    {
        if(j[i]!=j[i+1])
        {
            alu++;
        }
    }
    if(alu==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }


}
