#include <bits/stdc++.h>
using namespace std;
class triangle
{
private:
 double B;
 double H;
public:
 triangle()
 {
 cout << "Default constructor invoked" << '\n';
 B = 8.7;
 H = 11.3;
 }
 triangle(double a, double b)
 {
 cout << "Constructor (double, double) invoked"
<< '\n';
 B = a;
 H = b;
 }
 triangle(double a, int b)
 {
 cout << "Constructor (double, int) invoked" <<
'\n';
 B = a;
 H = b;
 }
 triangle(int &a, double &b)
 {
 cout << "Constructor (int, double) invoked" <<
'\n';
 B = a;
 H = b;
 }
 triangle(int a, int b)
 {
 cout << "Constructor (int, int) invoked" <<
'\n';
 B = a;
 H = b;
 }
 triangle(const triangle &tri)
 {
 B = tri.B;
 H = tri.H;
 }
 void Area()
 {
 cout << "Area of Triangle = " << (0.5 * H * B)
<< '\n';
 }
 ~triangle()
 {
 cout << "Destructor invoked" << '\n';
 }
};
int main()
{
 triangle x1;
 triangle x2(4.3, 7.8);
 triangle x3(6.4, 9);
 int p;
 double q;
 cout << "Enter integer for pass by reference: ";
 cin >> p;
 cout << "Enter double for pass by reference: ";
 cin >> q;
 triangle x4(p, q);
 triangle x5(5, 3);
 triangle x6(11.8, 15.7);
 triangle x7;
x7 = x6;
 x1.Area();
x2.Area();
x3.Area();
x4.Area();
x5.Area();
x6.Area();
x7.Area();
 return 0;
}
