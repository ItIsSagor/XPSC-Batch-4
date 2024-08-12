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
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                one++;
            } else {
                if (i == 0 || s[i - 1] != '0') {
                    zero++;
                }
            }
        }
        if (one > zero) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}