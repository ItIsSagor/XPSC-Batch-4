/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        long long a, b;
        cin >> a >> b;
        if (b == 1) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            cout << a * (2 * b - 1) << " " << a * (2 * b + 1) << " " << a * b * 4 << '\n';
        }
    }
    return 0;
}