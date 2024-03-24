/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
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
        string s, s1;
        cin >> s >> s1;
        bool found = true;
        for (int i = 0; i < n; i++) {
            if (s[i]=='R' && s1[i]=='G' || s[i]=='G' && s1[i]=='R' || s[i]=='R' && s1[i]=='B' || s[i]=='B' && s1[i]=='R') {
                found = false;
                break;
            }
        }
        if (found) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}