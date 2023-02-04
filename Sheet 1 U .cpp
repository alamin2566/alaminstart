#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a;
     cin>>a;
    int y=(int)a;
    if(a-y>0){
            cout<<"float"<<" "<<y<<" "<<a-y<<endl;
    }
    else {
        cout<<"int"<<" "<<y<<endl;
        return 0;
    }

}
