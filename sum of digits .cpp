#include<bits/stdc++.h>
using namespace std;
int main(){
       int num, temp, r , sum=0;

    cout<< "Enter The Number : " ;
    cin >> num;

    temp=num;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum+r;
        temp = temp/10;

    }

    cout << "Sum of Digit : " << sum;





}
