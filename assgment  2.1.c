#include <iostream>
using namespace std;

int main()

{
    cout << "Input 5 integers:\n";

    int currentNumber = 0;
    int maxNumber = 0;
    int maxNumberPosition = 0;


    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &currentNumber);

        if (currentNumber >= maxNumber)
        {
            maxNumber = currentNumber;
            maxNumberPosition = i;
        }
    }
    cout << "Highest Value: " << maxNumber << endl;
    cout << "Position: " << maxNumberPosition << endl;
    cin.get();
    return 0;
}
