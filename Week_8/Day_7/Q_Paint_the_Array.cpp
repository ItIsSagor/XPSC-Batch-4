/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        long long gcd = 0, x = 0;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
            if (i % 2 == 0) {
                gcd = __gcd(gcd, v[i]);
            } else {
                x = __gcd(x, v[i]);
            }
        }
        bool ok = false;
        for (long long i = 1; i < n; i += 2) {
            if (v[i] % gcd == 0) {
                ok = true;
            }
        }
        if (ok) {
            ok = false;
            for (long long i = 0; i < n; i += 2) {
                if (v[i] % x == 0) {
                    ok = true;
                }
            }
            if (ok) {
                cout << 0 << '\n';
            } else {
                cout << x << '\n';
            }
        } else {
            cout << gcd << '\n';
        }
    }
    return 0;
}