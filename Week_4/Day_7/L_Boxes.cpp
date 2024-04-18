/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
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
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        long long bx = 1, curr = v[0], i = 1, j = n-1;
        while (i <= j) {
            if (curr >= v[j]) {
                curr ^= v[j];
                j--;
            } else {
                curr = v[i];
                i++;
                bx++;
            }
        }
        cout << bx << '\n';
    }
    return 0;
}