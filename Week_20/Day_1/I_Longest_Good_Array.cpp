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
        int l, r;
        cin >> l >> r;
        int cnt = 0, differ = 0;
        while (l <= r) {
            l += differ;
            cnt++;
            differ++;
        }
        cout << cnt - 1 << '\n';
    }
    return 0;
}