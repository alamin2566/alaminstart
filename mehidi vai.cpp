#include <iostream>

class alamin {
 private:
    int data{0};
    int health{0};
 public:
    int setval(int d) { data = d;}
    alamin() {
        int data{0};
        std::cout << "Default constructor" << std::endl;
    }
    alamin(int d) {}        // Prototype
    ~alamin() {std::cout << "Destriuctor" << std::endl;}
};


// Execution of the prototype
alamin::alamin(int d) {
    data = d;
    std::cout << "Constructor" << std::endl;
}

int main() {
    alamin a;
    a.setval(10);
    alamin
