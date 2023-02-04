#include<iostream>
using namespace std;
class Check
{
 int value;
public:
 Check()
 {
 value = 0;
 }
 Check(int v)
 {
 value = v;
 }
 /*void getValue(int s)
 {
 value = s;
 } */
 void passobject(Check c) //c1.passobject(c2)
 {
 if(value>c.value)
 {
 cout<<c.value<<endl;
 }
 else
 {
 cout<<value<<endl;
 }
 }
 Check returnobject(Check a) //c1.returnobject(c2)
 {
 Check b;
 b.value = value;
 if(b.value<a.value)
 return b;
 else
 return a;
 }
 void display()
 {
 cout<<value<<endl;
 }
};
int main()
{
 Check c1=20,c2=10;
 cout<<"Pass object: "<<endl;
 c1.passobject(c2);
 cout<<"Return object: "<<endl;
 c1 = c1.returnobject(c2);
 c1.display();
 return 0;
}
