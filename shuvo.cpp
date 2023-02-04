#include<iostream>
using namespace std;

    int main() {
    char a,b;
	cin>>a>>b;
	if (a==b){
	    cout<<a;
	}
	else if(a!='R' && b!='R'){
	    cout<<'B';
	}
	else if(a=='R' || b=='R'){
	    cout<<'R';
	}
	return 0;
}



