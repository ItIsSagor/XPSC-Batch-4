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
        int x;
        cin >> x;
        int a = 0, b = 0, ans = 0, sum = 0;
        a = x;
        while (x != 0) {
            x /= 2;
            ans++;
        }
        sum = ans - 1;
        b = pow(2, sum);
        cout << (a - b) << " " << b << '\n';
    }
    return 0;
}