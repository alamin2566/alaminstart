#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    char s,e;
    cin>>a>>s>>b>>e>>c;
    if(s== '+'){
        if(a+b==c){
            cout<<"Yes"<<endl;
        }
        else
            cout<<a+b;
        }
        else if(s== '-')
        {
            if(a-b==c)
                cout<<"Yes"<<endl;
            else
                cout<<a-b;
        }
        else if(s=='*'){
            if(a*b==c)
                cout<<"Yes"<<endl;
            else
                cout<<a*b;
        }
}
