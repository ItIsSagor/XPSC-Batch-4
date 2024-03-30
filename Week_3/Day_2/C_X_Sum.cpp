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
        int n, m;
        cin >> n >> m;
        int mat[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        int mx = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sum = 0;
                for (int k = i, l = j; k < n && l >= 0; k++, l--) {
                    sum += mat[k][l];
                }
                for (int k = i, l = j; k >= 0 && l < m; k--, l++) {
                    sum += mat[k][l];
                }
                for (int k = i, l = j; k < n && l < m; k++, l++) {
                    sum += mat[k][l];
                }
                for (int k = i, l = j; k >= 0 && l >= 0; k--, l--) {
                    sum += mat[k][l];
                }
                sum -= mat[i][j]*3;
                mx = max(mx, sum);
            }
        }
        cout << mx << '\n';
    }
    return 0;
}