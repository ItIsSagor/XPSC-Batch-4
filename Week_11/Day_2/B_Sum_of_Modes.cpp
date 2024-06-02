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
        long long n;
        cin >> n;
        string s;
        cin >> s;
        map<long long, long long> mp;
        mp[0] = 1;
        long long one = 0, zero = 0, ans = n * (n + 1) / 2;
        for (long long i = 0; i < n; i++) {
            if (s[i] == '0') {
                zero++;
            } else {
                one++;
            }
            if (mp.find(zero - one) != mp.end()) {
                ans += mp[zero - one];
                mp[zero - one]++;
                continue;
            }
            mp[zero - one] = 1;
        }
        cout << ans << '\n';
    }
    return 0;
}