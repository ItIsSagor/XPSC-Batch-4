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
        int a, b, n;
        cin >> a >> b >> n;
        long long OutCome = b;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            OutCome += min(x, a - 1);
        }
        cout << OutCome << '\n';
    }
    return 0;
}