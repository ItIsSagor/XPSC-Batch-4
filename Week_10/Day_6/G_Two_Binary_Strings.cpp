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
        string s_1, s_2;
        cin >> s_1 >> s_2;
        bool ok = false;
        for (int i = 0; i < s_1.size() - 1; i++) {
            if (s_1[i] == '0' && s_1[i + 1] == '1' && s_2[i] == '0' && s_2[i + 1] == '1') {
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