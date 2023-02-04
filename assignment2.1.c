#include <iostream>
using namespace std;
class triangle{
public:
 double base;
 double height;
public:
 triangle(){
 base = 10;
 height = 5;
 }
 triangle(double a, double b){
 base = a;
 height = b;
 }
 triangle(double c, int d){
 base = c;
 height = d;
 }
 triangle(int &e, double &f){
 base = e;
 height = f;
 }
 triangle(int g, int h){
 base = g;
 height = h;
 }
 triangle(const triangle &obj){
 base = obj.base;
 height = obj.height;
 }
 void Area(){
 cout<<"AREA OF THE TRIANGLE: "<<(0.5 * base * height)<<endl;
 }
 ~triangle(){
 cout<<"values destroyed"<<endl;
 }
};
int main(){
 int e;
 double f;
 cout<<"Enter the value base because of pass by reference: "<<endl;
 cin>>e;
 cout<<"Enter the value height because of pass by reference: "<<endl;
 cin>>f;
 triangle t1;
 t1.Area();
 triangle t2(20, 15);
 t2.Area();
 triangle t3(30, 25);
 t3.Area();
 triangle t4(e, f);
 t4.Area();
 triangle t5(50, 45);
 t5.Area();
 triangle t6(60, 55);
 t6.Area();
 triangle t7;
 t7 = t6;
 t7.Area();
return 0;
}
