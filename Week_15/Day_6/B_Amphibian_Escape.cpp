/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, k, h;
        cin >> n >> k >> h;
        long long ans = 0;
        for (long long i = 1; i <= n; i++) {
            if (i >= h) {
                ans += n;
            } else {
                long long a = i;
                long long b = a * k - h;
                b /= (k - 1);
                ans = ans + max(0ll, b);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}