/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> v(n);
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < 2; i++) {
            vector<int> s(n + 1);
            int mx = 0;
            for (auto &x : v) {
                ans += x;
                if (s[x]) {
                    mx = max(mx, x);
                }
                s[x] = 1;
                x = mx;
            }
        }
        for (int i = 0; i < n; i++) {
            ans += 1LL * (n - i) * v[i];
        }
        cout << ans << '\n';
    }
    return 0;
}