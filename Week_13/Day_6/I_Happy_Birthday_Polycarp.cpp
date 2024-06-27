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
        int ans = 0, x = 0;
        for (int i = 1; i <= 9; i++) {
            x = x * 10 + 1;
            for (int j = 1; j <= 9; j++) {
                if (x * j <= n) {
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}