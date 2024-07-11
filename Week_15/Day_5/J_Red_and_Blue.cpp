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
        int cnt_OF_a = 0, mx_OF_a = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt_OF_a += x;
            mx_OF_a = max(mx_OF_a, cnt_OF_a);
        }
        int m;
        cin >> m;
        int cnt_OF_b = 0, mx_OF_b = 0;
        for (int i = 0; i < m; i++) {
            int y;
            cin >> y;
            cnt_OF_b += y;
            mx_OF_b = max(mx_OF_b, cnt_OF_b);
        }
        int total = mx_OF_a + mx_OF_b;
        cout << max(total, 0) << '\n';
    }
    return 0;
}