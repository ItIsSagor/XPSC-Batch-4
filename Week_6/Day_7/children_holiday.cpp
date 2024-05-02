/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<tuple<int, int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        v[i] = make_tuple(x, y, z);
    }

    vector<int> can(n);
    auto ok = [&] (int mid) {
        vector<int> may(n);
        int has = m;
        for (int i = 0; i < n; i++) {
            tuple<int, int, int> t = v[i];
            int x, y, z, total, can, remaining, curr;
            int x = get<0>(t);
            int y = get<1>(t);
            int z = get<2>(t);
            total = ((x * z) + y);
            can = (mid / total);
            remaining = mid % total;
            curr = ((can * z) + min(z, (remaining / x)));
            curr = min(has, curr);
            has -= curr;
            may[i] = curr;
        }
        if (!has) {
            for (int i = 0; i < n; i++) {
                can[i] = may[i];
            }
        }
        return (!has);
    };

    int l = 0, r = 1e8, mid, ans;
    while (l <= r) {
        mid = (l + r) / 2;
        if (ok(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    for (auto val : can) {
        cout << val << " ";
    }
    cout << '\n';
    return 0;
}