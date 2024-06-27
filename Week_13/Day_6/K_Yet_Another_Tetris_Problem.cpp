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
        int n, x, ans = 0;
        cin >> n;
        cin >> x;
        for (int i = 1; i < n; i++) {
            int y;
            cin >> y;
            if (abs(x - y) % 2 != 0) {
                ans = 1;
            }
            x = y;
        }
        if (ans == 0) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}