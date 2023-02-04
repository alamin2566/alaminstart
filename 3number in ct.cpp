#include<bits//stdc++.h>
using namespace std;
int main(){
    int amount,total;
    cout<<"input the amount :\n";
    cin>>amount;
    total=amount/100;
    cout<<"there are :\n";
    cout<<total<<"note(s) of 100\n";
    amount=amount-(total*100);
    total=amount/50;
    cout<<total<<"note(s) of 50\n";
    amount=amount-(total*50);
    total=amount/20;
    cout<<total<<"note(s) of 20\n";
    amount=amount-(total*20);
    total=amount/10;
    cout<<total<<"note(s) of 10\n";
    amount=amount-(total*10);
    total=amount/5;
    cout<<total<<"note(s) of 5\n";
    amount=amount-(total*5);
    total=amount/2;
    cout<<total<<"note(s) of 2\n";
    amount=amount-(total*2);
    total=amount/1;
    cout<<total<<"note(s) of 1\n";

    return 0;


}


