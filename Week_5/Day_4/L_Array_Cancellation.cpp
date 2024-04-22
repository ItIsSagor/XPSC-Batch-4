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
        long long sum = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            ans = min(ans, sum);
        }
        cout << -ans << '\n';
    }
    return 0;
}