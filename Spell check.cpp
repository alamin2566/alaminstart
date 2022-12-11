#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        int a;
        cin>>a;
        string j;
        cin>>j;
        if(a!=5){
            cout<<"NO"<<endl;
            continue;
        }
        sort(j.begin(),j.end());
        if(j=="Timru"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    }
}
