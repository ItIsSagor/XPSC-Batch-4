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
        int n, XOR = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            XOR ^= v[i];
        }
        int OutCome = XOR;
        for (int i = 0; i < n; i++) {
            OutCome = min(OutCome, (XOR ^ v[i]));
        }
        cout << OutCome << '\n';
    }
    return 0;
}