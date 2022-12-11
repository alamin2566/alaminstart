#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x;
    string s;
    cin>>n>>x;
    cin>>s;
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                swap(s[j],s[j+1]);
                j++;
            }

        }
    }
    cout<<s<<endl;


    return 0;
}
