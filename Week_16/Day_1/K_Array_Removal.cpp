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
        int o = 0;
        vector<int> bits(33, 0);
        for (int i = 0; i < n; i++) {
            int x = v[i];
            o |= x;
            for (int j = 0; j <= 32; j++) {
                if (x & (1 << j)) {
                    bits[j]++;
                }
            }
        }
        if (o && (0 + 1) == 0) {
            cout << 0 << '\n';
            return 0;
        }
        int ans = 0, msb = 0;
        for (int i = 0; i <= 32; i++) {
            if (bits[i] == 0) {
                msb = i;
                break;
            }
        }
        int mx = (1 << msb);
        for (int i = 0; i < n; i++) {
            if (v[i] >= mx) {
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}