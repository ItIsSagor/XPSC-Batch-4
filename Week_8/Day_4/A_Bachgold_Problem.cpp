/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    if (n % 2 == 0) {
        int ans = n / 2;
        cout << ans << '\n';
        for (int i = 1; i <= ans; i++) {
            cout << 2 << " ";
        }
    } else {
        n -= 3;
        int ans = n / 2;
        cout << ans+1 << '\n';
        for (int i = 1; i <= ans; i++) {
            cout << 2 << " ";
        }
        cout << 3 << '\n';
    }
    return 0;
}