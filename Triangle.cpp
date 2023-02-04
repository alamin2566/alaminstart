#include <iostream>
using namespace std;

class traingle{
public:
    int Base,Height;
    int setInput(int a,int b)
    {
       Base=a;
        Height=b;

        return Base && Height;
    }

    int Printarea()
    {
        int area=(0.5)*Base*Height;
        cout<<"AREA "<<area;
    }

};


int main()
{
    int p,q;
    cin>>p>>q;
    traingle c;

     c.setInput(p,q);
     c.Printarea();
    return 0;
}
