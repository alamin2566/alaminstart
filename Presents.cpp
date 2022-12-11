#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int friends[n];
    int gift[n];
    for(int i=1; i<=n; i++)
    {
        cin>>friends[i];
        gift[friends[i]]=i;
    }
    for(int i=1; i<=n; i++)
    {
        cout<<gift[i]<<" ";
    }
    cout<<'\n';




}
