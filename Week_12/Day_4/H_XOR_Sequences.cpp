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
        int a, b, OutCome = 1;
        cin >> a >> b;
        for (int i = 0; i <= 31; i++) {
            if ((a & 1) == (b & 1)) {
                OutCome <<= 1;
            } else {
                break;
            }
            a >>= 1;
            b >>= 1;
            if (!a && !b) {
                break;
            }
        }
        cout << OutCome << '\n';
    }
    return 0;
}