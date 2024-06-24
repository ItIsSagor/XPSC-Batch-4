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
        int n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;
        if ((x - 1 <= d || y + d >= m) && (y - 1 <= d || x + d >= n)) {
            cout << -1 << '\n';
        } else {
            cout << n + m - 2 << '\n';
        }
    }
    return 0;
}