#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Enter the number:";/*1
                                12
                                123
                                1234
                                12345
                                12345
                                1234
                                123
                                12
                                1 */
    cin>>n;

    for(row=1; row<=n; row++){

        for(col=1; col<=row; col++)
        {
            //char ch=col+64;
            //cout<<ch;
            cout<<col;
            //cout <<row;

            //cout<<"*";


        }
        cout<<endl;

    }
    for(row=n-1;row>=1;row--){
        for(col=1;col<=row;col++){
        //char ch=col+64;
            //cout<<ch;
            cout<<col;
            //cout<<row;

            //cout<<"*";
        }
        cout<<endl;
    }

}


