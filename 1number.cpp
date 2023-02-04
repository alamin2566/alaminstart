#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int max=0;
    int maximumNumberposition;
    for(int i=1; i<=5; i++)
    {
        cin>>n;
        if(n>=max)
        {
            max=n;
            maximumNumberposition=i;
        }
    }
    cout<<"Highest Value="<<max<<"\n";
    cout<<"Position="<<maximumNumberposition<<"\n";


}
