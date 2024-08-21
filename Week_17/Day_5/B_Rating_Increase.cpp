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
        string s, x, y;
        cin >> s;
        x += s[0];
        bool ok = false;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != '0' || ok) {
                y += s[i];
                ok = true;
            } else {
                x += s[i];
            }
        }
        if (y.size() == 0) {
            y += '0';
        }
        int a = stoi(x), b = stoi(y);
        if (b > a && a != 0 && b != 0) {
            cout << a << " " << b << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}