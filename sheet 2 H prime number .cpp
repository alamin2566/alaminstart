#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,count=0,i;
    cin>>x;
    for( i=2;i<x;i++){
        if(x%i==0){
            count++;
            break;
        }
    }
        if(count==0){
            cout<<"YES";
        }

        else{
             cout<<"NO";
        }




}

