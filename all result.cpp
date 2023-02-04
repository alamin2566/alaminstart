#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
 int Roll;
 string name;
 int marks;
public:
 void getData()
 {
 cout<<"Enter Roll: ";
 cin>>Roll;
 cout<<"Enter Name: ";
 cin>>name;
 cout<<"Enter Marks: ";
 cin>>marks;
 }
 int Maximum(Student s1[])
 {
 int i,maxi = 0, index;
 for(i=0;i<5;i++)
 {
 if(maxi<s1[i].marks){
 maxi = s1[i].marks;
index= i ;
 }
 }
 return index;
 }
 void putData()
 {
 cout<<"Roll: "<<Roll<<endl;
 cout<<"Name: "<<name<<endl;
 cout<<"Marks: "<<marks<<endl;
 }
};
int main()
{
 Student s[5],s1;
 int i,m;
 for(i=0;i<5;i++)
 {
 s[i].getData();
 }
 m = s1.Maximum(s);
// cout<<"Highest Mark: "<<m<<endl; //not needed
 s[m].putData();
 return 0;
}

