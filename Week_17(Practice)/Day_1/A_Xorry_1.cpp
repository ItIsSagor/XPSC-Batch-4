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
        int a = 0, b = 0, cnt = 0;
        a = n;
        while (n != 0) {
            n /= 2;
            cnt++;
        }
        b = pow(2, cnt - 1);
        cout << a - b << " " << b << '\n';
    }
    return 0;
}