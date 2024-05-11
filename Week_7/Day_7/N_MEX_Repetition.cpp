/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, k, sum = 0;
        cin >> n >> k;
        vector<long long> v_1(n + 1), v_2(n + 1);
        for (long long i = 1; i <= n; i++) {
            cin >> v_1[i];
            sum += v_1[i];
        }
        v_1[0] = ((n * (n + 1)) / 2) - sum;
        sum = (k) % (n + 1);
        for (long long i = 0; i <= n; i++) {
            v_2[(i + sum) % (n + 1)] = v_1[i];
        }
        for (long long i = 1; i <= n; i++) {
            cout << v_2[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}