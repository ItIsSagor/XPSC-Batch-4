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
        int n;
        cin >> n;
        int k = 1;
        while (2 * k < n) {
            k *= 2;
        }
        for (int i = n - 1; i >= k; i--) {
            cout << i << " ";
        }
        for (int i = 0; i < k; i++) {
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}