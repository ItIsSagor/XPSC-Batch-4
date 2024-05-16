/**
 *    author:  SAGOR AHMED
 *    created: 2024       
**/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

void fun() {
    int l, r;
    cin >> l >> r;
    int n = 1e4+4;
    for (int i = 2; i <= n; i++) {
        int x = (l + i - 1) / i * i;
        int y = x + i;
        if (y >= l && y <= r) {
            cout << i << " " << x << '\n';
            return;
        }
        if (x != i && x >= l && x <= r) {
            cout << i << " " << x - i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        fun();
    }
    return 0;
}