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
        string str_1, str_2;
        cin >> str_1 >> str_2;
        int ans = 0;
        for (int i = 1; i <= min(str_1.size(), str_2.size()); i++) {
            for (int j = 0; j + i <= str_1.size(); j++) {
                for (int k = 0; k + j <= str_2.size(); k++) {
                    if (str_1.substr(j, i) == str_2.substr(k, i)) {
                        ans = max(ans, i);
                    }
                }
            }
        }
        cout << str_1.size() + str_2.size() - 2 * ans << '\n';
    }
    return 0;
}