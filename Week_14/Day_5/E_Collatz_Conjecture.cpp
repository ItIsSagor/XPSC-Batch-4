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
        while (x > 1) {
            int s = y - (x % y);
            if (s >= k) {
                x += k;
                k = 0;
            } else {
                k -= s;
                x += s;
            }
            while (x % y == 0) {
                x /= y;
            }
            if (k <= 0) {
                break;
            }
        }
        if (k > 0) {
            k = k % (y - 1);
            x += k;
            while (x % y == 0) {
                x /= y;
            }
        }
        cout << x << '\n';
    }
    return 0;
}