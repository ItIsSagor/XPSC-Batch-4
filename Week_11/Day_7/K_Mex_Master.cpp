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
        int zero = 0, one = 0, others = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0) {
                zero++;
            }
            else if (v[i] == 1) {
                one++;
            } else {
                others++;
            }
        }
        if (zero <= (n + 1) / 2) {
            cout << 0 << '\n';
        }
        else if (others > 0 || one == 0) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
    return 0;
}