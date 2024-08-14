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
        long long h, n;
        cin >> h >> n;
        vector<long long> v(n), vv(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (long long i = 0; i < n; i++) {
            cin >> vv[i];
        }
        long long l = 0, r = 1e15, ans = 0;
        while (l <= r) {
            long long mid = (l + r) / 2;
            long long a = 0;
            for (long long i = 0; i < n; i++) {
                long long x = 1 + mid / vv[i];
                a += x * v[i];
                if (a >= h || x >= h) {
                    a = h;
                    break;
                }
            }
            if (a >= h) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}