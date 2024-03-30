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
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long ans = 0, total = 0, sum = 0;
        for (long long i = 0; i < n; i++) {
            if (v[i] <= q) {
                total++;
            } else {
                total = 0;
                sum = 0;
            }
            if (k <= total) {
                sum++;
            }
            ans += sum;
        }
        cout << ans << '\n';
    }
    return 0;
}