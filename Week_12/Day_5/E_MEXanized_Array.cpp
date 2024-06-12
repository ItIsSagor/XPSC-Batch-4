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
        int n, k, x;
        cin >> n >> k >> x;
        if (k > x + 1 || n < k) {
            cout << -1 << '\n';
        } else {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                if (i < k) {
                    sum += i;
                } else {
                    if (k == x) {
                        sum += k - 1;
                    } else {
                        sum += x;
                    }
                }
            }
            cout << sum << '\n';
        }
    }
    return 0;
}