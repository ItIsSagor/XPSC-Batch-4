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
    double x, y;
    cin >> x >> y;
    double x_y = y * log(x), y_x = x * log(y);
    if (x_y < y_x) {
        cout << "<" << '\n';
    }
    else if (x_y > y_x) {
        cout << ">" << '\n';
    } else {
        cout << "=" << '\n';
    }
    return 0;
}