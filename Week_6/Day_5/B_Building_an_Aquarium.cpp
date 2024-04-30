/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

const int N = 1e6+5;
const long long I = 1e18+5;
const long long Mid = 1e18+5;
vector<long long> v;
long long n, k;

bool ok(long long x) {
    long long a = 0;
    for (auto it : v) {
        if (it <= x) {
            a += x - it;
        }
        if (a > k) {
            break;
        }
    }
    return a <= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        cin >> n >> k;
        v.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long l = 0, r = 1e18, ans = -1, mid;
        while (l <= r) {
            mid = (l + r) / 2;
            if (ok(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}