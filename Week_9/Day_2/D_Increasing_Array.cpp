/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, ans = 0;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (long long i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            ans += (v[i - 1] - v[i]);
            v[i] = v[i - 1];
        }
    }
    cout << ans << '\n';
    return 0;
}