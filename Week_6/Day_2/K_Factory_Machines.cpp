/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, t;
    cin >> n >> t;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    auto ok = [&] (long long mm) {
        long long total = 0;
        for (long long i = 0; i < n; i++) {
            total += (mm / v[i]);
            if (total >= t) {
                return true;
            }
        }
        return false;
    };

    long long l = 1, r = 1e18, mid, ans;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}