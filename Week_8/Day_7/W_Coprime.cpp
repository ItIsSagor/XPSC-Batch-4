/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
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
        vector<int> v(n + 1);
        map<int, int> mp;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            mp[v[i]] = i;
        }
        int ans = INT_MIN;
        for (int i = 1; i <= 1000; i++) {
            if (mp[i] != 0) {
                for (int j = 1; j <= 1000; j++) {
                    if (mp[j] != 0) {
                        if (__gcd(i, j) == 1) {
                            ans = max(ans, mp[i] + mp[j]);
                        }
                    }
                } 
            }
        }
        if (ans == INT_MIN) {
            ans = -1;
        }
        cout << ans << '\n';
    }
    return 0;
}