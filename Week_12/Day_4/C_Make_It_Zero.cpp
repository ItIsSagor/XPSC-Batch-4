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

        if (n % 2 == 0) {
            cout << 2 << '\n';
            cout << 1 << " " << n << '\n';
            cout << 1 << " " << n << '\n';
        } else {
            cout << 4 << '\n';
            cout << 1 << " " << n - 1 << '\n';
            cout << 1 << " " << n - 1 << '\n';
            cout << n - 1 << " " << n << '\n';
            cout << n - 1 << " " << n << '\n';
        }
    }
    return 0;
}