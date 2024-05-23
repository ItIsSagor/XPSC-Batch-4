/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        long long a, b, l;
        cin >> a >> b >> l;
        set<long long> st;
        long long x = 1;
        while (l % x == 0) {
            int s = 1;
            while ((l / x) % s == 0) {
                st.insert((l / x) / s);
                s *= b;
            }
            x *= a;
        }
        cout << st.size() << '\n';
    }
    return 0;
}