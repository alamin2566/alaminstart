#include<iostream>
using namespace std;
int main(){

double k,p;
double d,x;
cout<<"Enter the discount: "<<endl;
cin>>p;
cout<<"Enter the post price: "<<endl;
cin>>d;
k=(1-(p/100));
x = d/k;
cout<<"Pre price or after the discount: "<<x<<endl;


return 0;

}
