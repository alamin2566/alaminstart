#include<iostream>
using namespace std;
class Vehicle
{
private:
 int modelno;
 char carname;
 int reginum;
public:
 void setValue(int a, char b, int c){
 modelno = a;
 carname = b;
 reginum = c;
 }
 void getValue(){
 cout<<"Enter the Model Number: \n";
 cin>>modelno;
 cout<<"Enter the Car Name: \n";
 cin>>carname;
 cout<<"Enter the Regi Number: \n";
 cin>>reginum;
 }
 void show(){
 cout<<modelno<<endl;
//cout<<"\n";
 cout<<carname;
 //cout<<"\n";
 cout<<reginum<<endl;
 }
};
int main(){
Vehicle c1,c2;
c1.setValue(28,'A',3829);
c1.show();
cout<<endl;
c2.getValue();
c2.show();
return 0;
}
