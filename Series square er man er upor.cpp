#include<bits/stdc++.h>//1^2+2^2+3^2+....+n^2
using namespace std;

int main(){

    int sum=0,n;

    cout<<"Enter the last number:";
    cin>>n;

    for(int i=1;i<=n;i=i+1){

        sum=sum+i*i;/*akhane question squar ache
        ejonno i er sathe r ekta i ghun korche jodhi
         squar er bodolo power r oo beshi hoto tahole  jmn power 3
          mane 3 tah i ghun korche*/
    }
    cout<<sum;




}
