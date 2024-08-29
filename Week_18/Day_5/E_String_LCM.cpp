/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        string str_1, str_2, s, ss;
        cin >> str_1 >> str_2;
        int n = str_1.size(), m = str_2.size();
        int p = n * m / __gcd(n, m);
        while (s.size() < p) {
            s += str_1;
        }
        while (ss.size() < p) {
            ss += str_2;
        }
        if (s != ss) {
            cout << -1 << '\n';
        } else {
            cout << s << '\n';
        }
    }
    return 0;
}