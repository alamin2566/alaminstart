//friend Function
#include <iostream>
using namespace std;
class A {
private:
    int a;

public:
    A() { a = 99; }
    friend class B; // Friend Class
};

class B {
private:
    int b;

public:
    void showA(A& x)
    {
        cout<< "afrin=ghartera" << x.a;
    }
};

int main()
{
    A a;
    B b;
    b.showA(a);
    return 0;
}
