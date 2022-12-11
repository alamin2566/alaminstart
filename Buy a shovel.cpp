#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int sum=0;
    for(int i=1;; i++)
    {
        sum+=x;
        if((sum%10==0) || (sum%10==y))
        {
            cout<<i;
            break;
        }
        else continue;
    }



}
