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
        int ans = 0;
        vector<string> v = {"1111111111", "1222222221", "1233333321", "1234444321", "1234554321", "1234554321", "1234444321", "1233333321", "1222222221", "1111111111"};
        for (int i = 0; i < 10; i++) {
            cin >> s;
            for (int j = 0; j < 10; j++) {
                if (s[j] == 'X') {
                    ans += v[i][j] - '0';
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}