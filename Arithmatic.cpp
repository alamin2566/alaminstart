#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num1,num2;

    cout<<"Enter 2 numbers :";//ami eta k input hisabe dakhaite chaici ami chaile eta k akhanei input dite partam jmn num1=5 num2=3 eiivabhe dite partam but ami ota k jekono input jate dite pari she jonno oii vabhe likhci;
    cin>>num1>>num2;


    int sum=num1 +num2;
    cout<<"sum is : "<<sum;
    cout<<endl;

    int sub=num1-num2;
    cout<<"subtraction is : "<<sub;
    cout<<endl;

    int mult=num1*num2;
    cout<<"multipication is : "<<mult;
    cout<<endl;

    double div= (float )num1/num2;//type casting
    cout<<"Division is : "<<div;
    cout<<endl;

    int rem=num1%num2;
    cout<<"reminder is : "<<rem;
    cout<<endl;

    getch();
}
