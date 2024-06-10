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
        vector<int> v(n), p(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }
        vector<int> lef(n, 0);
        vector<int> rite(n, 0);
        bool ok = false;
        for (int i = 1; i < n; i++) {
            if ((v[i] - p[i]) <= v[i - 1]) {
                lef[i] = lef[i - 1] + 1;
            }
        }
        for (int i = n - 2; i >= 0; i--) {
            if ((v[i] + p[i]) >= v[i + 1]) {
                rite[i] = rite[i + 1] + 1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                int curr_pow = rite[i] + 1;
                if (curr_pow == n || (curr_pow + 1 + rite[i + curr_pow] == n)) {
                    ok = true;
                    break;
                }
            }
            else if (i == n - 1) {
                int curr_pow = lef[i] + 1;
                if (curr_pow == n || (curr_pow + 1 + lef[i - 1 - lef[i]] == n)) {
                    ok = true;
                    break;
                }
            }
            else if (2 + lef[i] + rite[i + 1] == n) {
                ok = true;
                break;
            }
        }
        if (2 + rite[0] + lef[n - 1] >= n) {
            ok = true;
        }
        if (2 + rite[1] == n) {
            ok = true;
        }
        if (ok) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}