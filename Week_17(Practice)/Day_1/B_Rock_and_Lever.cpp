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
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            mp[ __lg(x)]++;
        }
        long long OutCome = 0;
        for (auto[x, y] : mp) {
            OutCome += (1LL * y * (y - 1)) / 2;
        }
        cout << OutCome << '\n';
    }
    return 0;
}