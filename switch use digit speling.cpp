#include<iostream>
#include<conio.h>
using namespace std;
int main(){

    int digit;

    cout<<"Enter a digit:";
    cin>>digit;

    switch(digit){

        case 0:
          cout<<"zero";
          break;
          case 1:
          cout<<"one";
          break;
          case 2:
          cout<<"two";
          break;
          case 3:
          cout<<"three";
          break;
          case 4:
          cout<<"four";
          break;

          default:
            cout<<"Not a digit";

          getch();


}

}
