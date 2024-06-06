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
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int i = 0, j = 0, cnt = 0, OutCome = INT_MAX;
        while (j < n) {
            mp[v[j]]++;
            if (j < d - 1) {
                j++;
                continue;
            }
            for (auto it : mp) {
                if (it.second > 0) {
                    cnt++;
                }
            }
            OutCome = min(OutCome, cnt);
            cnt = 0;
            mp[v[i]]--;
            i++;
            j++;
        }
        cout << OutCome << '\n';
    }
    return 0;
}