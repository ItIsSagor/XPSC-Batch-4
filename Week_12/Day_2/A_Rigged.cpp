/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

void fun() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 1; i < n; i++) {
        if (v[i].first >= v[0].first && v[i].second >= v[0].second) {
            cout << -1 << '\n';
            return;
        }
    }
    cout << v[0].first << '\n';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        fun();
    }
    return 0;
}