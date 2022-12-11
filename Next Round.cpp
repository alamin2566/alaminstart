#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
     int n[x];
    for(int i=0;i<x;i++){
          cin>>n[i];
    }
    int alu=0;
    for(int i=0;i<x;i++){
        if(n[i]>=n[y-1] && n[i]>0){
            alu++;
        }

    }
    cout<<alu<<endl;



}
