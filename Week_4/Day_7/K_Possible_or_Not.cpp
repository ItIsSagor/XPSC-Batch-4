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
        int a, b;
        cin >> a >> b;
        vector<int> v(a);
        for (int i = 0; i < a; i++) {
            cin >> v[i];
        }
        int c = -1;
        for (int i = 0; i < a; i++) {
            if ((v[i] & b) == b) {
                c &= v[i];
            }
        }
        if (c == b) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}