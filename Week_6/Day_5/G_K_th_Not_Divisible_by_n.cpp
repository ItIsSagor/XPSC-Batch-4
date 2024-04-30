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
        int n, k;
        cin >> n >> k;
        long long ans = k;
        while (n <= k) {
            ans += k/n;
            k = k/n + k%n;
        }
        cout << ans << '\n';
    }
    return 0;
}