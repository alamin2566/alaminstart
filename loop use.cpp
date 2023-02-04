#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,col,row;
    cout<<"Enter the number:";
    cin>>n;
    for(row=1;row<=n;row++){

        for(col=1;col<=row;col++){
            cout<<col%2;
        }
        cout<<endl;
    }





}
