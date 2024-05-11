/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, q;
        cin >> n >> q;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        map<long long, long long> mp;
        vector<long long> ans;
        for (long long i = 1; i <= q; i++) {
            long long x;
            cin >> x;
            if (mp[x]) {
                continue;
            }
            mp[x] = i;
            ans.push_back(x);
        }
        for (long long i = 0; i < n; i++) {
            for (auto it : ans) {
                long long val = 1;
                for (long long j = 0; j < it; j++) {
                    val *= 2;
                }
                if (v[i] % val == 0) {
                    v[i] += (val / 2);
                }
            }
            cout << v[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}