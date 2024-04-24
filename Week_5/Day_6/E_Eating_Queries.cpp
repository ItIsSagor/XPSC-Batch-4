/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        long long n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        vector<int> pref(n+1);
        pref[0] = v[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i-1] + v[i];
        }
        while (q--) {
            long long x;
            cin >> x;
            if (x > pref[n-1]) {
                cout << -1 << '\n';
                continue;
            }
            int l = 0, r = n-1, ans = -1, mid;
            while (l <= r) {
                mid = (l+r)/2;
                if (pref[mid] >= x) {
                    ans = mid;
                    r = mid -1;
                } else {
                    l = mid + 1;
                }
            }
            cout << ans+1 << '\n';
        }
    }
    return 0;
}