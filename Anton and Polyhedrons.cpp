#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int j,y=0;
    cin>>j;
    for(int i=0; i<j; i++)
    {
        cin>>x;
        if (x=="Icosahedron")
        {
            y=y+20;
        }
        else if(x=="Cube")
        {
            y=y+6;
        }
        else if(x=="Tetrahedron")
        {
            y=y+4;
        }
        else if(x=="Dodecahedron")
        {
            y=y+12;
        }
        else if(x=="Octahedron")
        {
            y=y+8;
        }


    }
    cout<<y;






}
