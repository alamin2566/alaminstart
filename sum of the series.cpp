#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,sum=0;

  cout<<"1+4+9+16+……+(n*n)";
  cout<<"nEnter the value of n:";
   cin>>n;
    for(i=1;i<=n;i=i+3){

        sum+=i;
}
        cout<<"summation"<<sum;


   return 0;


}
