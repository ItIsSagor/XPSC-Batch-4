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
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool ok = true;
        long long ans = 0, cnt_1 = 0, cnt_2 = 0, start = -1, finish = -1;
        for (long long i = n-1; i >= 0; i--) {
            if (v[i] == 1) {
                cnt_1++;
                ans += cnt_2;
                if (ok) {
                    finish = i;
                    ok = false;
                }
            } else {
                cnt_2++;
                start = i;
            }
        }
        long long firstLeg = ans + cnt_2 - 1 - start;
        long long secondLeg = ans + cnt_1 + finish - n;
        ans = max({ans, firstLeg, secondLeg});
        cout << ans << '\n';
    }
    return 0;
}