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
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long OutCome = 0;
        pbds<int> pd;
        for (int i = n - 1; i >= 0; i--) {
            OutCome += pd.order_of_key(v[i]);
            pd.insert(v[i]);
        }
        cout << OutCome << '\n';
    }
    return 0;
}