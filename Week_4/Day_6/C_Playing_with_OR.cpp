/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        int odd = 0;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (long long i = 0; i < k; i++) {
            if (v[i] % 2 != 0) {
                odd++;
            }
        }
        int ans = 0;
        if (odd > 0) {
            ans++;
        }
        for (long long i = k; i < n; i++) {
            if (v[i-k] % 2 != 0) {
                odd--;
            }
            if (v[i] % 2 != 0) {
                odd++;
            }
            if (odd > 0) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}