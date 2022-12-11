#include<bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
  int alamin;

  for (int i=0 ; i<5 ; i++)
    {
      for (int j=0 ; j<5 ; j++)
	{
	  int kallu;
	  cin >> kallu;
	  if (kallu==1)
        alamin = abs(i-2) + abs(j-2);
	}
    }
  cout << alamin << endl;
  return 0;
}
