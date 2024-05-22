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
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> x(k + 1), y(k + 1);
        x[0] = 0, y[0] = 0;
        for (long long i = 1; i <= k; i++) {
            cin >> x[i];
        }
        for (long long i = 1; i <= k; i++) {
            cin >> y[i];
        }
        while (q--) {
            long long s;
            cin >> s;
            long long l = 0, r = k;
            while (l <= r) {
                long long mid = l + r >> 1;
                if (x[mid] > s) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            if (x[r] == s) {
                cout << y[r] << " ";
                continue;
            }
            long long ans = y[r] + (s - x[r]) * (y[r + 1] - y[r]) / (x[r + 1] - x[r]);
            cout << ans << " ";
        }
        cout << '\n';
    }
    return 0;
}