//Multilevel Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {//a
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle {//b
public:
    fourWheeler()
    {
        cout << "Objects with 4 wheels are vehicles\n";
    }
};
// sub class derived from the derived base class fourWheeler
class Car : public fourWheeler {//c
public:
    Car() { cout << "Car has 4 Wheels\n"; }
};


int main()
{
    Car obj;
    return 0;
}

