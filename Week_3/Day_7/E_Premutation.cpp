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
        vector<vector<int>> v(n+1, vector<int> (n + 1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                v[i][j] = 0;
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < n; j++) {
                int num;
                cin >> num;
                v[j][num]++;
            }
        }
        int ans_1, ans_2;
        for (int i = 1; i <= n; i++) {
            if (v[1][i] != 0) {
                if (v[1][i] == n-1) {
                    ans_1 = i;
                } else {
                    ans_2 = i;
                }
            }
        }
        cout << ans_1 << " ";
        for (int i = 2; i <= n; i++) {
            cout << ans_2 << " ";
            for (int j = 1; j <= n; j++) {
                if (v[i][j] != 0 && j != ans_2) {
                    ans_2 = j;
                    break;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}