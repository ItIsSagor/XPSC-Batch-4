/**
 *    author:  SAGOR AHMED
 *    created: 2024       
**/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int gcd(int a, int b) {
    return __gcd(a, b);
}

int lcm(int a, int b) {
    return ((a / gcd(a, b)) * b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll l, r;
    cin >> l >> r;
    if ((r - l) % 2 == 0) {
        cout << "NO" << '\n';
    } else {
        cout << "YES" << '\n';
        for (ll i = l; i <= r; i += 2) {
            cout << i << " " << i + 1 << '\n';
        }
    }
    return 0;
}