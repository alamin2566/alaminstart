//#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main()
{
    int line;
    char in;
    cout << "Enter the number of line" << endl;
    cin>>line;
    cout << "Enter the symbol as you wish" << endl;
    cin>>in;
    int i=line;
    do{
            int j=i;
            do{
                cout<<" ";
    j++;
            }while(j<=line);
            j=1;
            do{
                cout<<in;
                j++;
            }while(j<=(2*i-1));
 cout<<"\n";
 i--;
    }while(i>=1);

    return 0;
}
