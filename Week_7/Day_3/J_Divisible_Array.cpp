/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int sum = (n*(n+1))/2;
        int ans = 1 + (n - (sum % n));
        cout << ans << " ";
        for (int i = 2; i <= n; i++) {
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}