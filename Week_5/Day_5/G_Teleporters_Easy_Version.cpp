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
        int n, c;
        cin >> n >> c;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            v[i] = i+x;
        }
        sort(v.begin()+1, v.end());
        int ans = 0;
        for (int i = 1; i <= n && v[i] <= c; i++) {
            c -= v[i];
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}