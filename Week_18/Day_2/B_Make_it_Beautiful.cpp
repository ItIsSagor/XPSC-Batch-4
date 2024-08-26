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
        if (v[0] == v[n - 1]) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            cout << v[0] << " ";
            for (int i = n - 1; i > 0; i--) {
                cout << v[i] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}