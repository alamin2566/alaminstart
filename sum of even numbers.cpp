#include<bits/stdc++.h>//2+4+6+8+...+n
using namespace std;
int main(){
    int sum=0,n;

    cout<<"Enter the last number:";
    cin>>n;

    for(int i=2;i<=n;i=i+2){
        sum=sum+i;
    }
    cout<<sum;



     return 0;


}
