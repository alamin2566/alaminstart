#include<bits/stdc++.h>
using namespace std;

int main()
{
   int x, y, i, gcd;

    cin>>x>>y;


   for (i = 1; i <= x && i <= y; i++)
   {
      if (x % i == 0 && y % i == 0)
       gcd=i;

   }


  cout<<gcd<<endl;

   return 0;
}
