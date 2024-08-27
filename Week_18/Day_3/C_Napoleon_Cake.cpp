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
        vector<int> v(n), x(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int temp = v[n - 1];
        for (int i = n - 1; i >= 0; i--) {
            if (temp != 0 || v[i] != 0) {
                x[i] = 1;
                temp = max(temp, v[i]);
                temp--;
            } else {
                temp = v[i];
            }
        }
        for (int i = 0; i < n; i++) {
            cout << x[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}