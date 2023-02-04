#include <iostream>//all angle cpp
using namespace std;

class rectarea{
public:
    int length,breadth;//just declare
    int setInput(int a,int b)//parameter pass by objects
    {
        length=a;
        breadth=b;

        return length && breadth; // returned length and  breadth to main program
    }

    int Printarea()
    {
        int area=(0.5)*length*breadth;
        cout<<"AREA "<<area;//prints area
    }

};


int main()
{
    int p,q;
    cin>>p>>q;
    rectarea c; //constractor name and object name

     c.setInput(p,q); //call by object and object passing to functions
     c.Printarea();//call by object of function to print area
    return 0;
}
