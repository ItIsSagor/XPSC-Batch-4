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
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        bool ok = false;
        for (int i = n - 1; i >= 0; i--) {
            if (v[i] > i + 1) {
                ok = true;
                break;
            }
        }
        if (ok) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}