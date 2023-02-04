#include<bits/stdc++.h>

using namespace std;
int main(){
    int i,num;
    long long int f=1;
    cout<<"Enter a number:";
    cin>>num;

    for(i=1;i<=num;++i)
        f*=i;

    cout << "Factorial of " << num << "is " << f;



}
