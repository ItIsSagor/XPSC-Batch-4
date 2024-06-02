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
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < 4; i++) {
            if (s[i] == '1') {
                cnt++;
            }
        }
        if (cnt == 0) {
            cout << 1 << '\n';
        }
        else if (cnt == 1) {
            cout << 11 << '\n';
        }
        else if (cnt == 3) {
            cout << 231 << '\n';
        }
        else if (cnt == 4) {
            cout << 441 << '\n';
        } else {
            if ((s[0] == '1' && s[1] == '1') || (s[2] == '1' && s[3] == '1')) {
                cout << 21 << '\n';
            } else {
                cout << 121 << '\n';
            }
        }
    }
    return 0;
}