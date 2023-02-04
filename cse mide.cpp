#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int v1, v2;
    public:
    Complex()
    {
        v1 = 0;
        v2 = 0;
    }
    Complex(int x, int y)
    {
        v1 = x;
        v2 = y;
    }
    void passingObject(Complex p1, Complex p2)
    {
        v1 = p1.v1 + p2.v1;
        v2 = p1.v2 + p2.v2;
    }
    void show()
    {
        cout<<"Summation = "<<v1<<" + "<<v2<<"i"<<"\n\n";
    }
    Complex returningObject(Complex p1, Complex p2)
    {
        Complex p3;
        p3.v1 = p1.v1 + p2.v1;
        p3.v2 = p1.v2 + p2.v2;
        return p3;
    }
    int getV1()
    {
        return v1;
    }
    int getV2()
    {
        return v2;
    }

};
int main()
{
    Complex c1(3, 6);
    Complex c2(4, 3);
    Complex c3;

    cout<<"<------Passing objects------>"<<"\n\n";
    cout<<"C1 Object: "<<c1.getV1()<<" + "<<c1.getV2()<<"i"<<"\n";
    cout<<"C2 Object: "<<c2.getV1()<<" + "<<c2.getV2()<<"i"<<"\n";
    c3.passingObject(c1,c2);
    c3.show();

    cout<<"<------returning objects------>"<<"\n\n";
    c3 = c3.returningObject(c1, c2);
    cout<<"C1 Object: "<<c1.getV1()<<" + "<<c1.getV2()<<"i"<<"\n";
    cout<<"C2 Object: "<<c2.getV1()<<" + "<<c2.getV2()<<"i"<<"\n";
    cout<<"Summation = "<<c3.getV1()<<" + "<<c3.getV2()<<"i"<<"\n";



}
