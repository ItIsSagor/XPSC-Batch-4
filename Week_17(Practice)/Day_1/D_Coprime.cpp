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
        vector<int> v(n + 1);
        map<int, int> mp;
        for (int i = 1; i <= n; ++i) {
            cin >> v[i];
            mp[v[i]] = i;
        }
        int OutCome = INT_MIN;
        for (int i = 1; i <= 1000; ++i) {
            if (mp[i] != 0) {
                for (int j = 1; j <= 1000; ++j) {
                    if (mp[j] != 0) {
                        if (__gcd(i, j) == 1) {
                            OutCome = max(OutCome, mp[i] + mp[j]);
                        }
                    }
                }
            }
        }
        if (OutCome == INT_MIN) {
            OutCome = -1;
        }
        cout << OutCome << '\n';
    }
    return 0;
}