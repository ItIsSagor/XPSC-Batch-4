/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

long long gcd(long long a, long long b) {
    return __gcd(a, b);
}
long long lcm(long long a, long long b) {
    return ((a / gcd(a, b)) * b);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, a, b, p, q, ans = 0, same;
    cin >> n >> a >> b >> p >> q;

    ans += ((n / a) * p);
    ans += ((n / b) * q);
    same = (n / lcm(a, b));
    ans -= (same*(p + q));
    ans += (same*max(p, q));
    cout << ans << '\n';
    return 0;
}