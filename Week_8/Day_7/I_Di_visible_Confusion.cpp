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
        int ok = true;
        for (int i = 1; i <= n; i++) {
            int v;
            cin >> v;
            bool found = false;
            for (int j = i + 1; j >= 2; j--) {
                if (v % j) {
                    found = true;
                    break;
                }
            }
            ok &= found;
        }
        if (ok) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}