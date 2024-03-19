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
        int n;
        cin >> n;
        map<string, int> mp;
        string str[3][n];
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                cin >> str[i][j];
                mp[str[i][j]]++;
            }
        }
        int total = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < n; j++) {
                if (mp[str[i][j]]==1) {
                    total += 3;
                }
                else if (mp[str[i][j]]==2) {
                    total++;
                }
            }
            cout << total << " ";
            total = 0;
        }
        cout << '\n';
    }
    return 0;
}