#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n,c=0;
    getline(cin,a);
    n=a.size();
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++)
    {
        if(a[i]=='{}'|| a[i]==','||a[i]==' ')
            {
                continue;
            }
            else
            {
                if(a[i]!=a[i+1])
                {
                    c++;
                }
            }

    }
    cout<<c-1;
}
