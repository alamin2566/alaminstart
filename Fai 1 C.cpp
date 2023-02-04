#include<iostream>
using namespace std;

// functions declaration
int add(int n1, int n2);
int subtract(int n1, int n2);
int multiply(int n1, int n2);
int divide(int n1, int n2,int n3);

// main function
int main()
{
  double  num1, num2,num3;

cout<<  "Enter three numbers: "<<endl;
 cin>>num1>>num2>>num3;

  cout<<"addition ="<<num1+num2+num3<<endl;

cout<<"subtraction ="<<num1-num2-num3<<endl;

cout<<"multiplication ="<<num1*num2*num3<<endl;

cout<<"divide ="<<num1/num2/num3<<endl;

  return 0;
}
