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

bool Prime(ll n) {
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        ll a = 1 + n;
        while (!Prime(a)) {
            a++;
        }
        ll b = a + n;
        while (!Prime(b)) {
            b++;
        }
        cout << a * b << '\n';
    }
    return 0;
}