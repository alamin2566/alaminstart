/*#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k;
    cin>>n>>k;
    int arr[n+1];
    arr[0]=0;
    for(int i=1; i<5; i++)
    {
        arr[i]=i;
        arr[i]=arr[i]*5;
    }
    int count=0;
    int check=k;
    for(int i=1; i<=n; i++)
    {
        if(check<=240)

        {
            check+=arr[i];
            if(check>240)
            {
                break;
            }
            count++;
        }
    }
    cout<<count<<'\n';



}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,alu=0;;
    cin>>x>>y;
    for(int i=1; i<=x; i++)
    {
        y=y+i*5;
        if(y>240)
            break;
        alu++;
    }
    cout<<alu<<'\n';
}

