/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
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
        string s;
        cin >> n >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                zero++;
            } else {
                one++;
            }
        }
        int ans = min(zero, one);
        if (ans % 2 == 0) {
            cout << "Ramos" << '\n';
        } else {
            cout << "Zlatan" << '\n';
        }
    }
    return 0;
}