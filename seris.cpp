#include<bits/stdc++.h>
using namespace std;
int main()
{
int num;
int i;
for(int g=0; g<1;)
{

cout<<"Please enter a number to find its length"<<endl;
cin>>num;

if(num!=0)
{
for(int p=0; p<1;)
{

if(num!=0)
{
num=num/10;
i++;
}
else
{
p++;
}
}
g=1;
cout<<"sum of the odd digits = "<<i<<endl;
system("pause");
}
else
{
cout<<"sum of the even digits"<<endl;
}
}
}
