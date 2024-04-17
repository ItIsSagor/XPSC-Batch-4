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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int x = 0;
        for (int i = 0; i < n; i++) {
            x ^= v[i];
        }
        if (n % 2 == 1 || x == 0) {
            cout << x << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}