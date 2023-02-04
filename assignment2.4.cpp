/*#include <iostream>
using namespace std;
int main()
{
    int n, row, col, star, space;
    cin >> n;
    for (row = 1; row <= n; row++)
    {
        space = n - row;
        for (col = 1; col <= space; col++)
        {
            cout << " ";
        }
        star = 2 * row - 1;
        for (col = 1; col <= star; col++)
        {
            if (row == 1 || col == 1 || col == star)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
    for (row = n - 1; row >= 1; row--)
    {
        space = n - row;
        for (col = 1; col <= space; col++)
        {
            cout << " ";
        }
        star = 2 * row - 1;
        for (col = 1; col <= star; col++)
        {
            if (row == 1 || col == 1 || col == star)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << "\n";
    }
}




*/

#include<iostream>

using namespace std;
int main(){
    int n,arr[16],i,h;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>h;
        if(i<15){
            arr[i]=h;
        }
        if(i>=14){
            cout<<"no empty space"<<endl;
            arr[14]=h;
        }
    }
    cout<<"\n\nAll the values:";
    if(n<15)
        for(int i=0;i<n;i++)
        cout<<arr[i]<<", ";
    else
        for(int i=0;i<15;i++)
            cout<<arr[i]<<", ";

    cout<<"\n";


    return 0;
}

