#include<bits/stdc++.h>
using namespace std;
#define MAX_READ_LOCKS
int main(){
      int x;
      cin>>x;
      while(x--){
        int a;
        cin>>a;
        int arr[a];
        for(int i=0;i<a;i++){
                int sum;

            cin>>arr[i];
        sum=max (arr[i])-min (arr[i])+max (arr[i])-min (arr[i]);
      cout<<sum;
        }
      }
    return 0;
}
