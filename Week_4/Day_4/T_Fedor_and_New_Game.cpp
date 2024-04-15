/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    for (int i = 0; i <= m; i++) {
        cin >> v[i];
    }
    vector<vector<int>> all_mask;
    for (int i = 0; i <= m; i++) {
        vector<int> vv;
        for (int k = 0; k < n; k++) {
            if ((v[i] >> k) & 1) {
                v.push_back(1);
            } else {
                v.push_back(0);
            }
        }
        all_mask.push_back(vv);
    }
    int final = 0;
    vector<int> mask = all_mask[m];
    for (int i = 0; i < all_mask.size() - 1; i++) {
        vector<int> vv = all_mask[i];
        int cnt = 0;
        for (int k = 0; k < n; k++) {
            if (mask[k] != vv[k]) {
                cnt++;
            }
        }
        if (cnt <= k) {
            final++;
        }
    }
    cout << final << '\n';
    return 0;
}