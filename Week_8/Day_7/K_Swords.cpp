/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0, x = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        ans = max(ans, v[i]);
    }
    for (int i = 0; i < n; i++) {
        x = __gcd(x, ans - v[i]);
    }
    long long OutCome = 0;
    for (int i = 0; i < n; i++) {
        OutCome += (ans - v[i]) / x;
    }
    cout << OutCome << " " << x << '\n';
    return 0;
}