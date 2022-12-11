#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
       string s1;
        cin>>s1;
        int count=0;
        for(int i=0;i<=s1.size();i++){
            if(s1[i]==s1[i+1]){
                count++;
            }
            if(count==2){
                break;
            }
            if(count==2){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }

    }
}
