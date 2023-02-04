#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int height;
    int width;
public:
    Rectangle()
    {
        cout<<"Constructor invoked"<<endl;
        length = 15;
        height = 0;
        width = 0;
        cout<<length<<" "<<height<<" "<<width<<endl;
    }
    ~Rectangle()
    {
        cout<<"Destructor invoked"<<endl;
    }
};

int main()
{
    Rectangle r1;
    return 0;
}
/*class Rectangle
{
    int length;
    int height;
    int width;
public:
    Rectangle() //default constructor
    {
        length = 5;
        height = 6;
        width = 7;
        cout<<length<<" "<<height<<" "<<width<<endl;
    }
    Rectangle(const Rectangle &rec) //copy constructor
    {
        length = rec.length;
        height = rec.height;
        width = rec.width;
        cout<<length<<" "<<height<<" "<<width<<endl;
    }
};
int main()
{
    Rectangle r1;
    Rectangle r2(r1);
    return 0;
}

//overloaded constructor
/*class Rectangle
{
    int length;
    int height;
    int width;
public:
    Rectangle()
    {
        length = 0;
        height = 0;
        cout<<length<<" "<<height<<endl;
    }
    Rectangle(int len, int hei)
    {
        length = len;
        height = hei;
    }
    Rectangle(int l,int h,int p)
    {
        length = l;
        height = h;
        width = p;
        cout<<length<<" "<<height<<" "<<width<<endl;
    }

};
int main()
{
    Rectangle r1,r2(8,9,10);

    return 0;

} */

//work with static storage class
/*class Minimum
{
    static int a;
    static int b;
public:
    int passbyvalue(int aa,int bb)
    {
        a = aa;
        b = bb;
        if(a<b)
            return a;
        else
            return b;
    }
    int passbyreference(int& aa,int& bb)
    {
        a = aa;
        b = bb;
        if(a<b)
            return a;
        else
            return b;
    }
};
int Minimum::a;
int Minimum::b;
int main()
{
    Minimum m1;
    int a,b;
    cin>>a>>b;
    cout<<"Pass by value: "<<m1.passbyvalue(a,b)<<endl;
    cout<<"Pass by reference: "<<m1.passbyreference(a,b)<<endl;
    return 0;
}*/
