#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int alu=0,kalu=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            alu++;

        }
        else
        {
            kalu++;
        }
    }
    if(alu>kalu)
    {
        cout<<"Anton"<<'\n';
    }
    else if(alu<kalu)
    {
        cout<<"Danik"<<'\n';
    }
    else if(alu==kalu)
    {
        cout<<"Friendship"<<'\n';
    }




}
