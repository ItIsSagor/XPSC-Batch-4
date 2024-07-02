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
        long long n;
        cin >> n;
        vector<long long> v(n);
        long long sum = 0;
        for (long long i = 0; i < n; ++i) {
            long long x;
            cin >> x;
            sum += x;
        }
        for (long long i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (long long i = 0; i < n - 1; ++i) {
            sum += v[i];
        }
        cout << sum << '\n';
    }
    return 0;
}