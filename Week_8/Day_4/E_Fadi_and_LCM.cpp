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
    ll n;
    cin >> n;
    ll idex;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0 && lcm(i, n/i) == n) {
            idex = i;
        }
    }
    cout << idex << " " << n / idex << '\n';
    return 0;
}