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
        long long n, m;
        cin >> n >> m;
        vector<long long> v(n), w(n);
        map<long long, long long> mp;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]%m]++;
        }
        for (long long i = 0; i < n; i++) {
            cin >> w[i];
        }
        long long cnt = 0;
        for (long long i = 0; i < n; i++) {
            long long rem = w[i] % m;
            long long x = (m - rem) % m;
            cnt += mp[x];
        }
        cout << cnt << '\n';
    }
    return 0;
}