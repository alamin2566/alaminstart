// Hierarchical Inheritance
#include <iostream>
using namespace std;

//base class
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

//first sub class
class Car : public Vehicle {
};

//second sub class
class Bus : public Vehicle {
};


int main()
{

    Car obj1;
    Bus obj2;
    return 0;
}
