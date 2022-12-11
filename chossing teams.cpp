#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,y;
    cin>>x>>y;
     int alu=0;
    for(int i=1;i<=x;i++){
        int al;

        cin>>al;
        if(5-al>=y)
            alu++;




    }
    if(alu>=3)

    cout<<alu/3<<'\n';
    else{
        cout<<"0"<<'\n';
    }
}
