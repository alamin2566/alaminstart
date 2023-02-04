#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i,f=1,num;
    cout<<"Enter a number:";
    cin>>num;

    for(i=1;i<=num;++i)
        f*=i;
    cout<<"factorial of "<<num<<f;
    getch();







}
