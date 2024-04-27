/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e4;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<long long> ppw;
    for (long long i = 1; i <= maxN; i++) {
        ppw.push_back(pow(i, 3));
    }
    long long tt;
    cin >> tt;
    while (tt--) {
        long long x;
        cin >> x;
        bool found = false;
        for (long long i = 0; i < maxN; i++) {
            if (ppw[i] >= x) {
                break;
            }
            long long l = 0, r = maxN-1, mid;
            long long need = x-ppw[i];
            bool ok = false;

            while (l <= r) {
                mid = (l + r) / 2;
                if (ppw[mid] == need) {
                    ok = true;
                    break;
                }
                else if (ppw[mid] > need) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            if (ok) {
                found = true;
                break;
            }
        }
        if (found) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}