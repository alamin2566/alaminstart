#include<iostream>
using namespace std;
int main()
{
int a,no,sum=0;
cout<<"Enter any num : ";
cin>>no;
while(no>0)
{
a=no%10;
no=no/10;
if (a % 2 == 0){
            sum = sum + a;
        }

}
cout<<"\nSum of digits: "<<sum;
return 0;
}
