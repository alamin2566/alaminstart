#include <iostream>
using namespace std;
int main()
{
    int totalrowno, row, col, star, space;
    cin >> totalrowno;
    for (row = 1; row <= totalrowno; row++)
    {
        space = totalrowno - row;
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
    for (row = totalrowno- 1; row >= 1; row--)
    {
        space = totalrowno- row;
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


