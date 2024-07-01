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
        if (n % 2) {
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout << '\n';
        } else {
            cout << 1 << " ";
            for (int i = 0; i < n - 2; i++) {
                cout << 2 << " ";
            }
            cout << 3 << " " << '\n';
        }
    }
    return 0;
}