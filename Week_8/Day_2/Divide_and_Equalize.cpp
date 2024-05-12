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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            // map<int, int> mp;
            for (int j = 2; j * j <= v[i]; j++) {
                if (v[i] % j == 0) {
                    while (v[i] % j == 0) {
                        mp[j]++;
                        v[i] /= j;
                    }
                }
            }
            if (v[i] > 1) {
                mp[v[i]]++;
            }
        }
        bool ok = true;
        for (auto x : mp) {
            if (x.second % n != 0) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}