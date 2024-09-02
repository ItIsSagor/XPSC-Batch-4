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
        sort(v.begin(), v.end());
        int a = v[0], b = v[1];
        for (int i = 1; i < n; i++) {
            if (v[i] % a) {
                b = v[i];
                break;
            }
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] % a == 0 || v[i] % b == 0) {
                cnt++;
            }
        }
        if (cnt == n) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}