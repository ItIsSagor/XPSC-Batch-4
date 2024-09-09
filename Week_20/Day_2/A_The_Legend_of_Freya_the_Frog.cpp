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
        int x, y, k;
        cin >> x >> y >> k;
        int ans = 0;
        int a = (x + k - 1) / k;
        int b = (y + k - 1) / k;
        if (a > b) {
            ans = 2 * a - 1;
        }
        else if (a == b) {
            ans = 2 * a;
        } else {
            ans = 2 * b;
        }
        cout << ans << '\n';
    }
    return 0;
}