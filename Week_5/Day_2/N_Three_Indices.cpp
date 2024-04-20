/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
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
        int ans = -1;
        for (int i = 1; i+1 < n; i++) {
            if (v[i] > v[i-1] && v[i] > v[i+1]) {
                ans = i;
            }
        }
        if (ans == -1) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            cout << ans << " " << ans+1 << " " << ans+2 << '\n';
        }
    }
    return 0;
}