/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        map<long long, long long> mp;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        long long ans = INT_MAX;
        for (long long i = 1; i <= n; i++) {
            long long res = n - mp[i];
            ans = min(ans, res*i);
        }
        cout << ans << '\n';
    }
    return 0;
}