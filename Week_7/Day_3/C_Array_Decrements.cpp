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
        int n, mx = 0;
        cin >> n;
        vector<int> v_1(n), v_2(n);
        for (int i = 0; i < n; i++) {
            cin >> v_1[i];
        } 
        for (int i = 0; i < n; i++) {
            cin >> v_2[i];
        }
        for (int i = 0; i < n; i++) {
            mx = max((v_1[i]-v_2[i]), mx);
        }
        for (int i = 0; i < n; i++) {
            v_1[i] = max(0, v_1[i]-mx);
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (v_1[i] != v_2[i]) {
                ok = false;
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