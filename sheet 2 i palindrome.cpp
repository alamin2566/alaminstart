#include<bits/stdc++.h>
using namespace std;
    int main(){
      int x,y,sum=0,temp;

      cin>>x;
      temp=x;
      while(x!=0){
        y=x%10;
        sum=(sum*10)+y;
        x=x/10;


        }
        cout<<sum<<endl;
        if(temp==sum)
            cout<<"YES";

        else
            cout<<"NO"<<endl;

        return 0;


    }
