#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    float sum=0;
    float ar[x];
    for(int i=0;i<x;i++){
        cin>>ar[i];
        sum+=ar[i];



    }
     cout<<sum/x;

}
