#include<bits/stdc++.h>
using namespace std;
int main() {


    int n,x;
    cin>>n;

    vector<int> v;
    while(n>0){

    x=n%5;
    n=n/5;



    v.push_back(x);


    }

    reverse(v.begin(),v.end());

    for(auto u:v) cout<<u;

}
