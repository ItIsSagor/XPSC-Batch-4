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
        string s;
        cin >> s;
        int final = 1e9;
        for (char ch = 'a'; ch <= 'z'; ch++) {
            int total = 0;
            int l = 0, r = n - 1;
            while (l <= r) {
                if (s[l] != s[r]) {
                    if (s[l] == ch) {
                        l++;
                        total++;
                    }
                    else if (s[r] == ch) {
                        r--;
                        total++;
                    } else {
                        total = 1e9;
                        break;
                    }
                } else {
                    l++;
                    r--;
                }
            }
            final = min(final, total);
        }
        if (final == 1e9) {
            cout << -1 << '\n';
        } else {
            cout << final << '\n';
        }
    }
    return 0;
}