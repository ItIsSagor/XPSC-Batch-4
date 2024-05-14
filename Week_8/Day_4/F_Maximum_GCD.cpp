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
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        cout << n / 2 << '\n';
    }
    return 0;
}