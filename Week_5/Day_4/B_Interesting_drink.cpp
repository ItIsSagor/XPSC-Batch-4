/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long q;
    cin >> q;
    long long ans = 0;
    while (q--) {
        long long m;
        cin >> m;
        long long ans = -1, l = 0, r = n-1, mid;
        while (l <= r) {
            mid = (l+r)/2;
            if (v[mid] <= m) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans+1 << '\n';
    }
    return 0;
}