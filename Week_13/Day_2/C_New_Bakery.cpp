/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, a, b;
        cin >> n >> a >> b;
        if (a >= b) {
            cout << n * a << '\n';
        } else {
            long long x = min(n, (b - a + 1));
            b = b - (x - 1);
            long long y = (x) * ((2 * b) + (x - 1));
            y /= 2;
            y += (n - x) * a;
            cout << y << '\n';
        }
    }
    return 0;
}