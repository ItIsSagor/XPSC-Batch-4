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
        vector<int> v(n);
        long long sum = 0, cnt = 0, ans = 1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cnt += v[i];
            ans = max(ans, __gcd(cnt, sum - cnt));
        }
        cout << ans << '\n';
    }
    return 0;
}