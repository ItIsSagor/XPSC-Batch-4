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
        string s, ans;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            if (ans.empty()) {
                ans += s[i];
            }
            else if (s[i] == 'A') {
                ans += s[i];
            }
            else if (s[i] == 'B') {
                ans.pop_back();
            }
        }
        cout << ans.size() << '\n';
    }
    return 0;
}