#include<iostream>
#include<conio.h>
int main(){
    double first ,second,temp;
    cout<<"Enter first number:";
    cin>>first;
    cout<<"Enter second number:";
    cin<<second;

    temp=first;

    first=second;

    second=temp;

    cout<<first;
    cout<<second;

    getch();

}
