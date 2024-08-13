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
        string s, t;
        cin >> s >> t;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                break;
            }
            if (t[i] == '1') {
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