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
        long long n, h;
        cin >> n >> h;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long l = 1, r = 1e18;
        while (l <= r) {
            long long mid = (l + r) / 2;
            long long sum = mid;
            for (long long i = 0; i < n - 1; i++) {
                sum += min(mid, v[i + 1] - v[i]);
            }
            if (sum < h) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << r + 1 << '\n';
    }
    return 0;
}