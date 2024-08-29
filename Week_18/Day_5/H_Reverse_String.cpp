/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

void fun() {
    string s, ss;
    cin >> s >> ss;
    int n = s.size(), m = ss.size();
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = i; j < n && x < m; j++) {
            if (s[j] != ss[x]) {
                break;
            }
            int y = x + 1;
            x = y;
            for (int k = j - 1; k >= 0 && y < m; k--) {
                if (s[k] != ss[y]) {
                    break;
                }
                y++;
            }
            if (y == m) {
                cout << "YES" << '\n';
                return;
            }
        }
    }
    cout << "NO" << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        fun();
    }
    return 0;
}