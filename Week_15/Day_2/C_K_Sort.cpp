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
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int mx = 0;
        long long sum = 0;
        for (int i = 1; i < n; ++i) {
            int x = max(v[i - 1] - v[i], 0);
            mx = max(mx, x);
            sum += x;
            v[i] += x;
        }
        cout << sum + mx << '\n';
    }
    return 0;
}