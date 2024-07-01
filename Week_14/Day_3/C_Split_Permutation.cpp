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
        if (n % 2 != 0) {
            for (int i = 1; i <= n/2; i++) {
                cout << i << " " << n - i << " ";
            }
            cout << n << '\n';
        } else {
            for (int i = 1; i <= n/2; i++) {
                cout << i << " " << n - i + 1 << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}