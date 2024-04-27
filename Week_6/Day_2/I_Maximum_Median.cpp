/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    auto ok = [&] (long long mid) {
        long long count = 0;
        for (int i = (n / 2); i < n; i++) {
            count += (v[i] < mid ? (mid - v[i]) : 0);
        }
        return count <= k;
    };

    long long l = 1, r = 2e9, mid, ans = 0;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}