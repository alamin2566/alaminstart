#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a;
    cin>>a;
    for(int i=1;i<=a;i++){
       long long int b;
        cin>>b;
        if(b==0){
            cout<<0;
        }
        while(b!=0){
            cout<<b%10<<" ";
            b/=10;
        }
        cout<<endl;
    }


}
