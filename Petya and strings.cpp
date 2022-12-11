#include<bits/stdc++.h>
using namespace std;
int main(){
    string h,k;
    cin>>h>>k;
    for(int i=0;i<h.size();i++){
        for(int i=0;i<k.size();i++){
            h[i]=tolower(h[i]);
            k[i]=tolower(k[i]);
        }
    }
    if(h<k){
        cout<<-1;
    }
    else if(h>k){
        cout<<1;
    }
    else {
        cout<<0;
    }




}
