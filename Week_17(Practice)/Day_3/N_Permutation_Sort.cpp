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
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int ans = 0;
        if (is_sorted(v.begin(), v.end())) {
            ans = 0;
        }
        else if (v[0] == 1 || v[n - 1] == n) {
            ans = 1;
        }
        else if (v[0] == n && v[n - 1] == 1) {
            ans = 3;
        } else {
            ans = 2;
        }
        cout << ans << '\n';
    }
    return 0;
}