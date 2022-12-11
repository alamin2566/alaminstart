#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,alu=0;
    cin>>x;
    string sallu;
    for(int i=0;i<x;i++){
        cin>>sallu;

    if(sallu[1]=='+'){
        alu++;
    }
    else{
        alu--;
    }
    }
     cout<<alu;





}
