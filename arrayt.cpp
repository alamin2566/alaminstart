#include<iostream>
using namespace std;
long int factorial();

int main()
{
cout<<"Factorial="<<factorial()<<endl;
cout<<"Factorial="<<factorial()<<endl;
cout<<"Factorial="<<factorial()<<endl;
return 0;
}
long int factorial()
{
int i, n;
long int fact=1;
cout<<"n=";
cin>>n;
for(i=n; i>=1; i--)
{
fact=fact*i;//5!=5.4.3.2.1;
}
//cout<<"factorial:"<<fact;
return fact;
}
