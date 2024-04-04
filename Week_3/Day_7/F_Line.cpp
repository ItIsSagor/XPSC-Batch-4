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
        vector<long long> v;
        string s;
        cin >> s;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') {
                v.push_back((n-1-i)-i);
                ans += i;
            } else {
                v.push_back(i-(n-1-i));
                ans += n-1-i;
            }
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < n; i++) {
            if (v[i] > 0) {
                ans += v[i];
            }
            cout << ans << " ";
        }
        cout << '\n';
    }
    return 0;
}