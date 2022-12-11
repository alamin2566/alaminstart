#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int j;
    cin>>j;
    while(j--){
    long long int n;
    cin>>n;
    int x[n];
    for(int i=0;i<n;i++)
       cin>>x[i];

    for(int i=1;i<n;i++)
        if(x[i]%x[0]){
            cout<<"NO";
        }



    cout<<"YES";
}

}
