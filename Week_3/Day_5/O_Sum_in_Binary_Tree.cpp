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
        long long n;
        cin >> n;
        long long OutCome = 0;
        while (n > 0) {
            OutCome += n;
            n /= 2;
        }
        cout << OutCome << '\n';
    }
    return 0;
}