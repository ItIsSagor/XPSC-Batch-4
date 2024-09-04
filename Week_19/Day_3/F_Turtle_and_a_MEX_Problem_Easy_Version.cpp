/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

long long sum(long long n) {
    return n * (n + 1) / 2;
}
long long sum(long long l, long long r) {
    return sum(r) - sum(l - 1);
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, m;
        cin >> n >> m;
        long long b = 0;
        for (long long i = 1; i <= n; i++) {
            set<long long> st;
            long long k;
            cin >> k;
            while (k--) {
                long long x;
                cin >> x;
                st.insert(x);
            }
            long long smx = 0;
            while (st.count(smx)) {
                smx++;
            }
            st.insert(smx);
            while (st.count(smx)) {
                smx++;
            }
            b = max(b, smx);
        }
        if (b <= m) {
            cout << 1LL * b * b + sum(b, m) << '\n'; 
        } else {
            cout << 1LL * (m + 1) * b << '\n';
        }
    }
    return 0;
}