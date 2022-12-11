#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,y,w;
	cin>>y>>w;
	n=max(y,w);
	if(n==1)cout<<1<<"/"<<1;
	if(n==2)cout<<5<<"/"<<6;
	if(n==3)cout<<2<<"/"<<3;
	if(n==4)cout<<1<<"/"<<2;
	if(n==5)cout<<1<<"/"<<3;
	if(n==6)cout<<1<<"/"<<6;
	return 0;
}
