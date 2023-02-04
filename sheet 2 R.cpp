#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    while(1){
        cin>>a>>b;
        if(a<=0||b<=0)
            break;
        int minn=min(a,b);
        int maxx=max(a,b);
        int sum=0;
        for(int i=minn;i<=maxx;i++){
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"sum ="<<sum<<endl;
    }




}



