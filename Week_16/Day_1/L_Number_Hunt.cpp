/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long x) {
    if (x <= 1) {
        return false;
    }
    if (x == 2 || x == 3) {
        return true;
    }
    if (x % 2 == 0) {
        return false;
    }
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long x, a, b;
        cin >> x;
        long long cnt = 0;
        if (isPrime(x)) {
            a = x;
            cnt++;
        }
        long long i = x + 1;
        while (true) {
            if (cnt == 2) {
                break;
            }
            if (isPrime(i)) {
                if (cnt == 0) {
                    a = i;
                    cnt++;
                }
                else if (cnt == 1) {
                    b = i;
                    cnt++;
                }
            }
            i++;
        }
        cout << a * b << '\n';
    }
    return 0;
}