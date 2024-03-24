/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int i = 0; i <= k; i++) {
        for (int j = 0; j <= k; j++) {
            int ans = s-i-j;
            if (ans >= 0 && ans <= k) {
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}