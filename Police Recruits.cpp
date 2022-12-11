#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int police=0;
    int crime=0;
    for(int i=0; i<x; i++)
    {
        int y;
        cin>>y;
        if(y>0)
        {
            police+=y;
        }
        else
        {
            if(police<1)
            {
                crime++;
            }
            else
            {
                police--;
            }
        }
    }
    cout<<crime<<'\n';



}
