#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;


     //int n;

    for(int i=1;i<=t;i++){
            long long fact=1;

            int n;
             cin>>n;

        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<fact<<endl;
    }
    return 0;
}
