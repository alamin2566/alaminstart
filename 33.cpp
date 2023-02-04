#include <iostream>
#include<string.h>
using namespace std;
void findElement(int arr[], int size, int key)
{

 for (int i = 0; i <= size; i++) {
 if (arr[i]==  key) {
 cout << "Element found at position: " << (i);

 break;
 }
 }
}


int main()
{
 int arr[] = { 1, 2, 3, -4, -5, 6 };
 int n = 6,i;
 int key = -5 ;

 findElement(arr, n-1, key);
 return 1;
}
