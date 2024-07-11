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
        string s;
        cin >> n >> s;
        int OutCome = 0, countOFdot = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                countOFdot++;
                OutCome++;
            } else {
                countOFdot = 0;
            }
            if (countOFdot >= 3) {
                break;
            }
        }
        if (countOFdot >= 3) {
            cout << 2 << '\n';
        } else {
            cout << OutCome << '\n';
        }
    }
    return 0;
}