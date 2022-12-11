#include<bits/stdc++.h>
using namespace std;
int main()
{
    int alu[4];
    for(int i=0; i<3; i++)
    {
        cin>>alu[i];
    }
    sort(alu,alu+3);
    cout<<(alu[2]-alu[1])+(alu[1]-alu[0]);


}
