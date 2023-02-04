
#include<bits/stdc++.h>
using namespace std;
int main(){
    double A,B,C,sum=0;
    cin>>A>>B>>C;
    sum=(((2*A)+(3*B)+(5*C))/(2+3+5));
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"MEDIA = "<<sum<<setprecision(1);
}
