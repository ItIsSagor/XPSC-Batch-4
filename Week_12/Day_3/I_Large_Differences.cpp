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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int ans = 0, ans_1 = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> mm;
        for (int i = 0; i < n; i++) {
            mm = v;
            mm[i] = 1;
            int sum = 0;
            for (int j = 0; j < n - 1; j++) {
                sum += abs(mm[j] - mm[j + 1]);
            }
            ans = max(ans, sum);
        }
        for (int i = 0; i < n; i++) {
            mm = v;
            mm[i] = k;
            int sum = 0;
            for (int j = 0; j < n - 1; j++) {
                sum += abs(mm[j] - mm[j + 1]);
            }
            ans_1 = max(ans_1, sum);
        }
        cout << max(ans_1, ans) << '\n';
    }
    return 0;
}