#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,count=0,i;
    cout<<"Enter any positive number:";
    cin>>num;

    for(i=2;i<num;i++){

        if(num%i==0){}
        count ++;
        break;
    }
    if(count ==0)
        //printf("Prime number\n");
        cout<<"Jahin"<<endl;
    else
        cout<<"Tasir"<<endl;
    return 0;







}
