#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,sum=0,rem,temp,fact,i;

    cout<<"Enter an integer:";
    cin>>num;

    temp=num;

     while(temp!=0){

        rem=temp%10;

        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
     }
     if(sum==num){
        cout<<"Strong number"<<num;
     }
     else{
        cout<<"NOT a Strong number"<<num;
     }




}
