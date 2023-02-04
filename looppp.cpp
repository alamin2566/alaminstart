#include <iostream>
using namespace std;
int main()
{
    int A[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int max = A[0];
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            index = i;
        }
    }

    cout << max << " " << index + 1;
}
