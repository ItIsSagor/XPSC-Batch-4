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
        int one = 0, others = 0;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            if (x == 1) {
                one++;
            } else {
                others++;
            }
        }
        cout << others + (one + 1) / 2 << '\n';
    }
    return 0;
}