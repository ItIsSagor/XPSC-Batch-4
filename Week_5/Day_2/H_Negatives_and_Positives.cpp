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
        int n;
        cin >> n;
        vector<int> v(n);
        long long negativeValue = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            if (v[i] < 0) {
                negativeValue++;
                v[i] = -v[i];
            }
            sum += v[i];
        }
        sort(v.begin(), v.end());
        if (negativeValue & 1) {
            sum -= 2 * v[0];
        }
        cout << sum << '\n';
    }
    return 0;
}