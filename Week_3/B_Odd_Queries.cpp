/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        long long n, q;
        cin >> n >> q;
        vector<int> v(n+1);
        for (long long i = 1; i <= n; i++) {
            cin >> v[i];
            v[i] += v[i-1];
        }
        while (q--) {
            long long l, r, k;
            cin >> l >> r >> k;
            long long ans = v[l-1] + v[n]-v[r] + (k*(r-l+1));

            if (ans % 2 == 0) {
                cout << "NO" << '\n';
            } else {
                cout << "YES" << '\n';
            }
        }
    }
    return 0;
}