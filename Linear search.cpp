#include<bits/stdc++.h>
using namespace std;
int main(){
    int num[]={10,2,15,20,35,46,85};
    int value;
    int pos=-1;
    cout<<"Enter the value i want to search:";
    cin>>value;
    for(int i=0;i<7;i++){
        if(value==num[i]){
            pos=i+1;
            break;
        }
    }
    if(pos==-1){
        cout<<"Item is not found:";
    }
    else{
        cout<<"The value is found postion"<<pos;
    }





}
