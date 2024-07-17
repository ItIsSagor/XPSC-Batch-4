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
        string s;
        cin >> s;
        int O = 0, Z = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                O++;
            } else {
                Z++;
            }
        }
        int ans = min(O, Z);
        if (ans % 2) {
            cout << "DA" << '\n';
        } else {
            cout << "NET" << '\n';
        }
    }
    return 0;
}