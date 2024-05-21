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
        if (a < b) {
            if (b % 2 == 1) {
                cout << (b * b - a + 1) << '\n';
            } else {
                cout << ((b - 1) * (b - 1) + 1 + a - 1) << '\n';
            }
        } else {
            if (a % 2 == 0) {
                cout << (a * a - b + 1) << '\n';
            } else {
                cout << ((a - 1) * (a - 1) + 1 + b - 1) << '\n';
            }
        }
    }
    return 0;
}