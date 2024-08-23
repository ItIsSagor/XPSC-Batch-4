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
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp_1, mp_2;
        int x = 0;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp_1[v[i]]++;
        }
        for (int i = 0; i < n; i++) {
            mp_1[v[i]]--;
            mp_2[v[i]]++;
            if (mp_2[v[i]] == 1) {
                x++;
            }
            if (!mp_1[v[i]]) {
                ans += x;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}