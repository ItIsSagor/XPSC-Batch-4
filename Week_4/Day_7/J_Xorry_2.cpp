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
        int ans_1 = 0, ans_2 = 1;
        bool ok = false;
        for (int i = 30; i >= 0; i--) {
            int bit = (1 << i);
            if ((n & bit) != 0) {
                ans_1++;
            }
            else if (ans_1 >= 2) {
                ans_2 *= 2;
            }
        }
        cout << ans_2 << '\n';
    }
    return 0;
}