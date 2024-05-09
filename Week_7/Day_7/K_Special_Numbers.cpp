/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;
const long long mod = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long a, b;
        cin >> a >> b;
        long long ans = 0;
        for (long long i = 30; i >= 0; i--) {
            long long s = 1 << i;
            if (s <= b) {
                b -= s;
                long long x = 1;
                for (long long j = 1; j <= i; j++) {
                    x *= a;
                    x %= mod;
                }
                ans += x;
                ans %= mod;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}