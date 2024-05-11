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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int st = v[0], nd = v[0];
        string ans = "1";
        bool ok = false;

        for (int i = 1; i < n; i++) {
            if (ok == false) {
                if (v[i] >= nd) {
                    ans.push_back('1');
                    nd = v[i];
                }
                else if (v[i] <= st) {
                    ok = true;
                    ans.push_back('1');
                    nd = v[i];
                } else {
                    ans += '0';
                }
            } else {
                if (v[i] >= nd && v[i] <= st) {
                    ans += '1';
                    nd = v[i];
                } else {
                    ans += '0';
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}