
#include <iostream>
#include<string.h>
using namespace std;//;was not given
void findElement(int arr[], float size, double key)/*Declaration of Array    datatype  arryayname [arrar size]*/
{

 for (int i = 0; i <= size; i++) {
 if (arr[i]==  key) {
 cout << "Element found at position: " << (i+1 );

 break;
 continue;//;was not given
 }

 }
}


int main()
{
 int arr[] = { 1, 2, 3, -4, -5, 6 };
 int n = 6;//;was not given
 int key = -5;/*;was not given  &-3 is not any of the array elements */

 findElement(arr,n-1, key);
 return 1;
}
