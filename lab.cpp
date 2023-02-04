#include<iostream>
using namespace std;
class Minimum{
private:
 int a;
 int b;
public:
 int PassbyValue(int a, int b){
 if(a>b){
 cout<<"Minimum number is through pass by value = "<<b<<endl;
 }
 else{
 cout<<"Minimum number is through pass by value = "<<a<<endl;
 }
 return 0;
 }
 int PassbyReference(int& a, int& b){
 if(a>b){
 cout<<"Minimum number is through pass by reference = "<<b<<endl;
 }
 else{
 cout<<"Minimum number is through pass by reference = "<<a<<endl;
 }
 return 0;
 }
};
int main(){
 int a,b;
 cout<<"Enter the first value"<<endl;
 cin>>a;
 cout<<"Enter the second value"<<endl;
 cin>>b;
Minimum p1,p2;
p1.PassbyValue(a,b);
cout<<endl;
p2.PassbyReference(a,b);
return 0;
}
