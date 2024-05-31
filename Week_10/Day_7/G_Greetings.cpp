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
        long long n;
        cin >> n;
        vector<pair<long long, long long>> v;
        for (long long i = 0; i < n; i++) {
            long long a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        sort(v.begin(), v.end());
        pbds<long long> pd;
        for (auto it : v) {
            pd.insert(it.second);
        }
        long long ans = 0;
        for (long long i = 0; i < n; i++) {
            pd.erase(v[i].second);
            ans += (pd.order_of_key(v[i].second));
        }
        cout << ans << '\n';
    }
    return 0;
}