#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,alu=0;
    cin>>x;
    int kal[x];
    for(int i=0; i<x; i++)
    {
        cin>>kal[i];
    }
    int max=kal[0];
    int min=kal[0];
    for(int i=0; i<x; i++)
    {
        if(kal[i]>max)
        {
            max=kal[i];
            alu++;
        }
        if(kal[i]<min)
        {
            min=kal[i];
            alu++;
        }
    }
    cout<<alu;







}
