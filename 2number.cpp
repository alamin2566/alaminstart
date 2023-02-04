#include<iostream>
using namespace std;

int main() {
  int n; cin >> n;
  for (int line = 1; line <= n; line++) {
    int sum = 0;
    for (int i = 1; i <= line; i++) {
      if (i > 1) {
        cout << '+';
      }
      cout << i;
      sum += i;
    }
    cout << '=';
    cout << sum << '\n';
  }
  return 0;
}
