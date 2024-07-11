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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int ans = k, even = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] % 2 == 0) {
                even++;
            }
            if (v[i] % k == 0) {
                ans = 0;
            }
            ans = min(ans, k - v[i] % k);
        }
        if (k == 4) {
            if (even >= 2) {
                ans = 0;
            }
            else if (even == 1) {
                ans = min(ans, 1);
            } else {
                ans = min(ans, 2);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}