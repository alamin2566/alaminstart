#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max=0;
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        int num;


        cin>>num;
        if(num>max)
        {
            max = num;
        }
    }
    cout<< max <<endl;
    return 0;
}

