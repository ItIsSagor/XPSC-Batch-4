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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = s;
    reverse(ans.begin(), ans.end());
    map<char, vector<int>> p_s, p_ans;
    for (int i = 0; i < n; i++) {
        p_s[s[i]].push_back(i);
        p_ans[ans[i]].push_back(i);
    }

    vector<int> per(n);
    for (char i = 'a'; i <= 'z'; i++) {
        for (int j = 0; j < p_s[i].size(); j++) {
            per[p_ans[i][j]] = p_s[i][j];
        }
    }
    pbds<int> pd;
    long long OutCome = 0;
    for (int i = n - 1; i >= 0; i--) {
        OutCome += pd.order_of_key(per[i]);
        pd.insert(per[i]);
    }
    cout << OutCome << '\n';
    return 0;
}