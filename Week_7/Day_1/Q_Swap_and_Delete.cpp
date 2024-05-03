/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

void fun (string s) {
    int o = 0, z = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            o++;
        } else {
            z++;
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            if (o) {
                o--;
            } else {
                cout << s.length() - i << '\n';
                return;
            }
        } else {
            if (z) {
                z--;
            } else {
                cout << s.length() - i << '\n';
                return;
            }
        }
    }
    cout << 0 << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        fun(s);
    }
    return 0;
}