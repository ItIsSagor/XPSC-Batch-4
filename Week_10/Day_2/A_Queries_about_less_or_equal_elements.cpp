/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag,
tree_order_statistics_node_update>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, m;
    cin >> n >> m;
    pbds<long long> pd;
    for (long long i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        pd.insert(x);
    }
    while (m--) {
        long long s;
        cin >> s;
        cout << pd.order_of_key(s+1) << " ";
    }
    cout << '\n';
    return 0;
}