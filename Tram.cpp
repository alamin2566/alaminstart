#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n ;
    cin >> n ;
    int ans = 0, sum = 0 ;
    for(int i = 1 ; i <= n ; i++) {
        int a , b ;
        cin >> a >> b ;
        sum -= a ;
        sum += b ;
        ans = max(ans , sum) ;
    }
    cout << ans << "\n" ;
    return 0 ;
}
