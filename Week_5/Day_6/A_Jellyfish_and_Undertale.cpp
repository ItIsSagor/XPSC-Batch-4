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
        int a, b, n;
        cin >> a >> b >> n;
        long long ans = b;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            ans += min(x, a-1);
        }
        cout << ans << '\n';
    }
    return 0;
}