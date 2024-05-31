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
    long long n;
    cin >> n;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    }
    pbds<long long> pd;
    vector<long long> in(n);
    for (long long i = n - 1; i >= 0; i--) {
        if (i == (n - 1)) {
            pd.insert(v[i]);
        } else {
            in[i] = pd.order_of_key(v[i]);
            pd.insert(v[i]);
        }
    }
    pd.clear();
    long long OutCome = 0;
    for (long long i = 0; i < n; i++) {
        if (i == 0) {
            pd.insert(v[i]);
        } else {
            long long kom = pd.order_of_key(v[i]);
            long long beshi = pd.size() - kom;
            OutCome += (in[i] * beshi);
            pd.insert(v[i]);
        }
    }
    cout << OutCome << '\n';
    return 0;
}