#include<bits/stdc++.h>
using namespace std;
int main()
{

    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int ar[n+3];
            for(int i=0; i<n; i++)cin>>ar[i];
            int ans=1;
            if(ar[0]==1)ans++;
            for(int i=1; i<n; i++)
            {
                if(ar[i]==1)
                {
                    if(ar[i-1]==1)ans+=5;
                    else ans+=1;
                }
                else
                {
                    if(ar[i-1]==0)
                    {
                        ans=-1;
                        break;
                    }
                }
            }
            cout<<ans<<endl;

        }
    }
}

