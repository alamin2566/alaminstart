#include <iostream>
using namespace std;

class construct
{
public:

    int a, b;

    // Default Constructor
    construct()
    {
    a = 10;
    b = 20;

    }
};

int main()
{
    // Default constructor called automatically
    // when the object is created
    construct d;
    cout << "a: " << d.a << endl;
        cout<< "b: " << d.b;
    return 0;
}
