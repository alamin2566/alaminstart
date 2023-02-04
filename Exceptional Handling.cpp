//Exceptional Handling
#include <iostream>
using namespace std;

int main()
{
   int x = 5;

   // Some code
   cout << "Before try \n";
   try {
      cout << "Inside try \n";
      if (x<2)
      {
         throw x;
         cout << "After throw (Never executed) \n";
      }
   }
   catch (int x ) {
      cout << "Exception Caught \n";
   }

   cout << "After catch (Will be executed) \n";
   return 0;
}
