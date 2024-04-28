/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
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
        vector<long long> v(n), w(m), ans(m);
        vector<pair<long long, long long>> pv(m);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (long long i = 0; i < m; i++) {
            cin >> w[i];
            pv[i].first = w[i];
            pv[i].second = i;
        }
        sort(pv.begin(), pv.end());
        long long j = 0, count = 0;
        for (long long i = 0; i < m; i++) {
            while (pv[i].first >= v[j] && j < n) {
                count += v[j];
                j++;
            }
            ans[pv[i].second] = count;
        }
        for (long long i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}