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
        vector<int> v(n), vv(n + 1);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n + 1; i++) {
            cin >> vv[i];
        }
        long long final = 0;
        int s = 1e9 + 5;
        for (int i = 0; i < n; i++) {
            final += (abs(v[i] - vv[i]));
            s = min(abs(vv[n] - v[i]), s);
            s = min(abs(vv[n] - vv[i]), s);
            if (min(v[i], vv[i]) <= vv[n] && vv[n] <= max(v[i], vv[i])) {
                s = 0;
            }
        }
        cout << final + s + 1 << '\n';
    }
    return 0;
}