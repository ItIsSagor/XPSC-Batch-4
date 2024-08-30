/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        if (n == 1) {
            cout << k << '\n';
        } else {
            long long x = (k - (n % k)) % k;
            long long ans = (x + n - 1) / n;
            cout << ans + 1 << '\n';
        }
    }
    return 0;
}