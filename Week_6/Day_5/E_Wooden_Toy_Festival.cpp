/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<pair<int, int>> pr;
        int ans = INT_MIN, mainAns = 0, l = 0, r = INT_MAX;
        while (l <= r) {
            ans = 0;
            int s = 0;
            int mid = (l + r) / 2;
            for (int i = 0; i < n; i++) {
                if (abs(v[s] - v[i]) > mid*2) {
                    s = i;
                    ans++;
                }
            }
            if (ans >= 3) {
                l = mid + 1;
            } else {
                mainAns = mid;
                r = mid - 1;
            }
        }
        cout << mainAns << '\n';
    }
    return 0;
}