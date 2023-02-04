#include <iostream>//all angle cpp
#include<string.h>
using namespace std;

class player{
public:
    string  name;
    int number;
    double age;//just declare
     void setInput(string a,int b,double c)//parameter pass by objects
    {
        name=a;
        number=b;
         age=c;
       // returned length and  breadth to main program
    }

    int Printarea()
    {

        cout<<"name"<<name<<"number"<<number<<"age"<<age<<endl;
    }

};


int main()
{
    string p;
     int q;
    double r;

    player c[5000]; //constractor name and object name

     for (int i=0;i<5000;i++){
        cin>>p>>q>>r;
        c[i].setInput(p,q,r); //call by object and object passing to functions

     c[i].Printarea();//call by object of function to print area
     }


    return 0;
}

