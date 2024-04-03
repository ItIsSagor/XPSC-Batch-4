/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, m, h;
        cin >> n >> m >> h;
        vector<long long> a(n), b(m);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (long long i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        long long ans = 0;
        for (long long i = 0; i < min(n,m); i++) {
            ans += min(a[i], b[i]*h);
        }
        cout << ans << '\n';
    }
    return 0;
}