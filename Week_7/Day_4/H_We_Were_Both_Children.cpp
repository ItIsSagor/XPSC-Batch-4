/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
        long long res = 0, sum = 0;
        for (int i = 1; i <= n; i++) {
            sum = 0;
            int val = i;
            for (int j = 1; j <= sqrt(val); j++) {
                if (val % j == 0) {
                    if (val / j == j) {
                        sum += mp[j];
                    } else {
                        sum += mp[j] + mp[val / j];
                    }
                }
                res = max(res, sum);
            }
        }
        cout << res << '\n';
    }
    return 0;
}