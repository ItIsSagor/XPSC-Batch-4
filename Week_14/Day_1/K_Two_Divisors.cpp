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
        long long a, b;
        cin >> a >> b;
        long long ans;
        if (b % a) {
            cout << a * b / __gcd(a, b) << '\n';
        } else {
            cout << b * b / a << '\n';
        }
    }
    return 0;
}