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
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.length()-1-i; i++) {
            if (s[i] != s[s.length()-1-i]) {
                ans++;
            }
        }
        for (int i = 0; i <= n; i++) {
            if (i >= ans && i <= n-ans && ((n&1) || (i-ans+1) &1)) {
                cout << 1;
            } else {
                cout << 0;
            }
        }
        cout << '\n';
    }
    return 0;
}