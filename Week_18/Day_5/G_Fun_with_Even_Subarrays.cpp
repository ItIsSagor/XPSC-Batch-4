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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        reverse(v.begin(), v.end());
        int ans = 0;
        for (int i = 0; i < n; ) {
            if (v[i] == v[0]) {
                i++;
            } else {
                i *= 2;
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}