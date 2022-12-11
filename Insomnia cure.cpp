#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,a,alu=0;
    cin>>k>>l>>m>>n>>a;
    for(int i=1; i<=a; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
        {
            alu++;
        }

    }
    cout<<alu;



}
