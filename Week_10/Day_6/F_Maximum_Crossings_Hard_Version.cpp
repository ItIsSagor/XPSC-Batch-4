/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,
tree_order_statistics_node_update>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, ans = 0;
        cin >> n;
        vector<long long> v(n + 1);
        map<long long, long long> mp;
        pbds<pair<long long, long long>> pd;
        for (long long i = 1; i <= n; i++) {
            cin >> v[i];
        }
        for (long long i = n; i > 0; i--) {
            mp[v[i]]++;
            long long s = mp[v[i]];
            pair<long long, long long> x = {v[i], s};
            pd.insert(x);
            ans += pd.order_of_key(x);
        }
        cout << ans << '\n';
    }
    return 0;
}