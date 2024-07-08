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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int ans = 0, prev = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            ans = max(ans, v[i] - prev);
            prev = v[i];
        }
        cout << max(ans, 2 * (x - prev)) << '\n';
    }
    return 0;
}