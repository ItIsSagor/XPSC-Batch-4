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
        long long a, b;
        cin >> a >> b;
        vector<long long> pos, neg;
        for (long long i = 0; i < a; i++) {
            long long x;
            cin >> x;
            if (x < 0) {
                neg.push_back(abs(x));
            }
            if (x > 0) {
                pos.push_back(x);
            }
        }
        sort(pos.begin(), pos.end());
        sort(neg.begin(), neg.end());
        a = pos.size();
        long long ans = 0;
        if (a) {
            long long tmp = a % b;
            long long store;
            if (tmp) {
                ans += (2 * pos[tmp - 1]);
                store = pos[tmp - 1];
            }
            for (long long i = tmp + b - 1; i < a; i += b) {
                ans += (2 * pos[i]);
                store = pos[i];
            }
            ans -= store;
        }

        a = neg.size();
        if (a) {
            long long tmp = a % b;
            long long store;
            if (tmp) {
                ans += (2 * neg[tmp - 1]);
                store = neg[tmp - 1];
            }
            for (long long i = tmp + b - 1; i < a; i += b) {
                ans += (2 * neg[i]);
                store = neg[i];
            }
            ans -= store;
        }

        if (!pos.empty() && !neg.empty()) {
            ans += min(pos.back(), neg.back());
        }
        cout << ans << '\n';
    }
    return 0;
}