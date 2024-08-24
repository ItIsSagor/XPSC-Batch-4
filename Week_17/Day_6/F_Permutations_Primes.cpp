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
        vector<int> v(n, -1);
        if (n <= 2) {
            for (int i = 0; i < n; i++) {
                v[i] = i + 1;
            }
        } else {
            v[0] = 2;
            v[n - 1] = 3;
            v[n / 2] = 1;
            int x = 3;
            for (int i = 0; i < n; i++) {
                if (v[i] == -1) {
                    v[i] = ++x;
                }
            }
        }
        for (int s : v) {
            cout << s << " ";
        }
        cout << '\n';
    }
    return 0;
}