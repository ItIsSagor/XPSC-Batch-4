/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s_1, s_2;
    cin >> s_1 >> s_2;
    int cnt = 0;
    while (1) {
        int x = s_1.length() - cnt - 1, y = s_2.length() - cnt - 1;
        if (x >= 0 && y >= 0 && s_1[x] == s_2[y]) {
            cnt++;
        } else {
            break;
        }
    }
    cout << s_1.length() + s_2.length() - cnt * 2 << '\n';
    return 0;
}