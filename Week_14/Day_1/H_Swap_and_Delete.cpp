/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;

void fun(string s) {
    int One = 0, Zero = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '1') {
            One++;
        } else {
            Zero++;
        }
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            if (One) {
                One--;
            } else {
                cout << s.length() - i << '\n';
                return;
            }
        } else {
            if (Zero) {
                Zero--;
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