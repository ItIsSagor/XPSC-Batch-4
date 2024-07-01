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
        string s, ss, sss;
        cin >> s >> ss >> sss;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            if (s[i] != sss[i] && ss[i] != sss[i]) {
                ok = true;
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