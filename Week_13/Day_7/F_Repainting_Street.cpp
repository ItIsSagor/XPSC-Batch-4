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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ans = n;
        for (int i = 1; i <= 100; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                if (v[j] != i) {
                    cnt++;
                    j += k - 1;
                }
            }
            ans = min(ans, cnt);
        }
        cout << ans << '\n';
    }
    return 0;
}