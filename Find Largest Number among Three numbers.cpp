#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num1,num2,num3;

    cin>>num1>>num2>>num3;
    if(num1>=num2 &&num1>=num3){
        cout<<"Largest number"<<num1;
    }
    else if(num2>=num1 &&num2>=num3){
        cout<<"Largest number"<<num2;
    }
    else if (num3>=num1 && num3>=num2){
        cout<<"Largest number"<<num3;
    }
    getch();






}
