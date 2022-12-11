#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  long int t;
    cin>>t;
read:
    while(t--)
    {
        long long int  n;
        cin>>n;
        long long int a[n];
        for(long long int  i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(long long int i=1; i<n; i++)
        {
            if(a[i]-a[i-1]>1)
            {
                cout<<"NO"<<endl;
                goto read;

            }
        }
        cout<<"YES"<<endl;
    }



}
