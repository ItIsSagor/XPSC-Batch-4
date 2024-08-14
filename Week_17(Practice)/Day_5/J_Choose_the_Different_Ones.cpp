/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        set<int> st_1, st_2;
        int cnt_a = 0, cnt_b = 0;
        bool not_found = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            st_1.insert(a[i]);
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            st_2.insert(b[i]);
        }
        for (int i = 1; i <= k; i++) {
            if (!st_1.count(i) && !st_2.count(i)) {
                not_found = true;
                break;
            }
            cnt_a += st_1.count(i);
            cnt_b += st_2.count(i);
        }
        if (not_found) {
            cout << "NO" << '\n';
        }
        else if (min(cnt_a, cnt_b) < k / 2) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}