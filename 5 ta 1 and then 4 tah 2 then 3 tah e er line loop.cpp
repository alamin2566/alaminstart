#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Enter the number:";
    cin>>n;

    for(row=1; row<=n; row++){

        for(col=1; col<=row; col++)
        {
            cout<<col;
            //cout <<row;

            //cout<<"*";

        }
        cout<<endl;

    }
    for(row=n;row>=1;row--){
        for(col=1;col<=row;col++){
            cout<<col;
            //cout<<row;

            //cout<<"*";
        }
        cout<<endl;
    }

}


