/**
 *    author:  SAGOR AHMED
 *    created: 2024       
**/
#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll gcd(ll a, ll b) {
    return __gcd(a, b);
}

ll lcm(ll a, ll b) {
    return ((a / gcd(a, b)) * b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll tt;
    cin >> tt;
    while (tt--) {
        ll a, b;
        cin >> a >> b;
        while (1) {
            if (gcd(a, b) == 1) {
                break;
            }
            b /= (gcd(a, b));
        }
        if (b == 1) {
            cout << "Yes" << '\n';
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}