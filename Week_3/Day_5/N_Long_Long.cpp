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
        long long n, sum = 0, cnt = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += abs(v[i]);
        }
        for (int i = 0; i < n; i++) {
            if (v[i] >= 0) {
                continue;
            }
            int j = i;
            while (j < n && v[j] <= 0) {
                j++;
            }
            cnt++;
            i = j-1;
        }
        cout << sum << " " << cnt << '\n';
    }
    return 0;
}