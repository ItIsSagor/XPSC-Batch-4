/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, m;
    cin >> n >> m;
    multiset<long long, greater<int>> tic;
    while (n--) {
        int s;
        cin >> s;
        tic.insert(s);
    }
    while (m--) {
        long long x;
        cin >> x;
        auto it = tic.lower_bound(x);
        if (it == tic.end()) {
            cout << -1 << '\n';
        } else {
            cout << *it << '\n';
            tic.erase(it);
        }
    }
    return 0;
}