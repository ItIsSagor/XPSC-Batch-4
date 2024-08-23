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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int cnt_1 = 0, cnt_2 = 0, cnt_3 = 0, indx_1, indx_2;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int num_1 = v[0], num_2 = v[n - 1];
        for (int i = 0; i < n; i++) {
            if (v[i] ==  num_1) {
                cnt_1++;
                if (cnt_1 <= k) {
                    indx_1 = i;
                }
                else if (v[i] == num_2) {
                    cnt_2++;
                }
            }
        }
        for (int i = indx_1 + 1; i < n; i++) {
            if (v[i] == num_2) {
                cnt_3++;
            }
        }
        if (cnt_1 >= k && cnt_3 >= k || (cnt_1 >= k && num_1 == num_2)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}