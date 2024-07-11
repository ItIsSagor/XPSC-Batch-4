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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);
        vector<int> b(n);
        vector<int> final(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            v[i].second = i;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(v.begin(), v.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++) {
            final[v[i].second] = b[i];
        }
        for (int i = 0; i < n; i++) {
            cout << final[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}