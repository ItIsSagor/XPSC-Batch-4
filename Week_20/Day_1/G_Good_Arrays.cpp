/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, sum = 0;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        if (n == 1) {
            cout << "NO" << '\n';
            continue;
        }
        for (long long i = 0; i < n; i++) {
            if (v[i] == 1) {
                sum -= 2;
            } else {
                sum -= 1;
            }
        }
        if (sum < 0) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }
    return 0;
}