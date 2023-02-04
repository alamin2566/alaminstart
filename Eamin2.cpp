#include<iostream>
using namespace std;//stt

class Animal
{
public://private is not accessable
    void eat()
    {
        cout<<"I can eat"<<endl;
    }
    void sleep()//() was not given
    {
        cout<<"I can sleep"<<endl;
    }
};
class Dog: public Animal  //inside of protected everything is protected
{
public:
    void bark()
    {
        cout<<"I can bark!"<<endl;
    }
};
class CAT: public Animal  //inside of protected everything is protected
/*syentex of inheritence is
class deived_class_name : access_mode base_class_name
{
//body of subclass
};
WE cannot use same class name (Dog)2times.

*/
  public  :
    void bark()
    {
        cout<<"I can bark!"<<endl;
    }
};
int main()
{
    Dog dog1;
    CAT cat1;
    Animal animal;
    dog1.eat();
    dog1.sleep();
    dog1.bark();
    cat1.eat();
    cat1.sleep();
    cat1.bark();

    return 0;
}
