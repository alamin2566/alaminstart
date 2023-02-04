#include<iostream>
#include<string>
using namespace std;
class person{
private:
    string name;
    string varsity;
public:
    void getname(){

    cout<<"Enter the name"<<endl;
    cin>>name;
    }
    void putname(){

    cout<<name<<endl;
    }
    virtual void getdata()=0;
    virtual void outstanding()=0;
};
class student: public person{

private:
    double cgpa;
public:
    void getdata(){
        cout<<"For the students"<<endl;
    person::getname();
    person::putname();

    cout<<"Enter the cgpa"<<endl;
    cin>>cgpa;
    }
    void outstanding(){
    if(cgpa>3.50){
        cout<<"Great"<<endl;
    }
    else{
        cout<<"Not great"<<endl;
    }


    }



};
class professor: public person{

private:
    int numpubs;
public:
    void getdata(){

    cout<<"For professor"<<endl;
    person::getname();
    person::putname();
    cout<<"Enter the number of publication"<<endl;
    cin>>numpubs;

    }
    void outstanding(){

    if(numpubs>100){
        cout<<"great"<<endl;
    }
    else{
        cout<<"Lame"<<endl;
    }

    }



};
int main(){
person *p;
student s;
p=&s;
p->getdata();
p->outstanding();
professor f;
p = &f;
p->getdata();
p->outstanding();



}
