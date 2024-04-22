/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
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
        string s, ans;
        cin >> s;
        int i = n-1;
        while (i >= 0) {
            if (s[i] != '0') {
                ans += 'a' + (s[i]-'0')-1;
                i--;
            } else {
                int g = stoi(s.substr(i-2,2));
                ans += 'a' + g - 1;
                i -= 3;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}