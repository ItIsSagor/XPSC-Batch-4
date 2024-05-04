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
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int mx = 0, OutCome = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (i+1 < n) {
                mx = max(mx, abs(v[i]-v[i+1]));
            }
            if (i-1 >= 0) {
                mx = max(mx, abs(v[i]-v[i-1]));
            }
            OutCome = min(OutCome, mx);
        }
        cout << OutCome << '\n';
    }
    return 0;
}