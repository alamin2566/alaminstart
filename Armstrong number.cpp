#include<bits/stdc++.h>
using namespace std;
int main(){
    int initialNum,finalNum,temp,r,sum=0,i;//arrmstrong number bujhtasina


    cout<<"initial value:";
    cin>>initialNum;

    cout<<"final value:";
    cin>>finalNum;

    for(i=initialNum;i<=finalNum;i++){

            temp=i;

        while(temp!=0){

        r=temp%10;
        sum=sum*10+r*r*r;
        temp=temp/10;

    }
    if(sum==i){
       cout<<" Armstrong number";
    }
    else{
        cout<<"Not Armstrong number";
    }
    }

}
