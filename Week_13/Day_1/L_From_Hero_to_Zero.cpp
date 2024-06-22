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
        long long n, k;
        cin >> n >> k;
        long long cnt = 0;
        while (n != 0) {
            if (n % k == 0) {
                n /= k;
                cnt++;
            } else {
                long long mod = n % k;
                cnt += mod;
                n -= mod;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}