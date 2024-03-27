/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
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
        int macs = INT_MIN;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
            macs = max(macs, mp[v[i]]);
        }
        int OutCome = n - macs;
        while (macs < n) {
            OutCome++;
            macs *= 2;
        }
        cout << OutCome << '\n';
    }
    return 0;
}