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
        long long n, quer;
        cin >> n >> quer;
        vector<long long> v(n);
        map<int, int> mp_1, mp_2;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (long long i = 0; i < n; i++) {
            if (mp_1.count(v[i])==0) {
                mp_1[v[i]] = i;
            }
            mp_2[v[i]] = i;
        }
        while (quer--) {
            int a, b;
            cin >> a >> b;
            if (mp_1.count(a) == 0 || mp_2.count(b) == 0) {
                cout << "NO" << '\n';
                continue;
            }
            if (mp_1[a] <= mp_2[b]) {
                cout << "YES" << '\n';
            } else {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}