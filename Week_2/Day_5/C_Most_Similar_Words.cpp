/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int fun(string s_1, string s_2) {
    int ans = 0;
    for (int i = 0; i < s_1.size(); i++) {
        ans += abs(s_1[i]-s_2[i]);
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        int mn = INT_MAX;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                ans = fun(s[i], s[j]);
                mn = min(mn, ans);
            }
        }
        cout << mn << '\n';
    }
    return 0;
}