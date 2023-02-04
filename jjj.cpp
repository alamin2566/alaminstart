#include <iostream>
using namespace std;
void even(int a){

  cout << a << " -> ";
  for (int i = 2; i <= a; i+=2)
  cout << i << " ";
  cout << '\n';
}

void odd(int a){
  cout << a << " -> ";
  for (int i = 1; i <= a; i+=2)
    cout << i << " ";
    cout << '\n';
}

int main()
{
  int tt;
  cin >> tt;
  while(tt--){
    int x;
    cin >> x;
    for(int i = 1; i < x+1; i++){
      if ( i % 2) odd(i);
      else even(i);

    }

  }


}
