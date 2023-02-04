#include<iostream>
using namespace std;;

class A
 {
 protected:
    int members{9};
 public:

 	int get(){
 		return members;
 	}
 };
 class B {
 private:
 	 int member{100};
 public:
 	int get(){
 		return member;
 	}
 };

 void friends(A a, B b) {
 	int z = a.get()+b.get();
 	cout << z <<endl;

 }

     int main()
     {
    A ob1;
    B ob2;
    friends(ob1, ob2);
    return 0;
     }
