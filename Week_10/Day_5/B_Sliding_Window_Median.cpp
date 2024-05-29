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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int l = 0, r = 0;
    pbds<pair<int, int>> pd;
    while (r < n) {
        pd.insert({v[r], r});
        if (r - l + 1 == k) {
            int pos = k / 2;
            if (k % 2 == 0) {
                pos--;
            }
            auto it = pd.find_by_order(pos);
            cout << it->first << " ";
            pd.erase({v[l], l});
            l++;
        }
        r++;
    }
    cout << '\n';
    return 0;
}