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
        string s, h;
        cin >> s >> h;
        int s_len = s.length(), h_len = h.length();
        bool ok = false;
        sort(s.begin(), s.end());
        for (int i = 0; i < h_len; i++) {
            if (i + s_len - 1 >= h_len) {
                break;
            }
            string ans = "";
            for (int j = i; j <= i + s_len - 1; j++) {
                ans += h[j];
            }
            sort(ans.begin(), ans.end());
            if (ans == s) {
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