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
        vector<long long> v(n), ans(n, 0);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long x = 1;
        for (long long i = 2; i <= 1000; i++) {
            bool ok = false;
            for (long long j = 0; j < n; j++) {
                if (v[j] % i == 0 && ans[j] == 0) {
                    ok = true;
                    ans[j] = x;
                }
            }
            if (ok) {
                x++;
            }
        }
        cout << x - 1 << '\n';
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << '\n';
    }
    return 0;
}