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
        int mx = 0, ans = v.back();
        for (int i = 0; i < n - 1; i++) {
            mx = max(mx, v[i]);
        }
        ans += mx;
        cout << ans << '\n';
    }
    return 0;
}