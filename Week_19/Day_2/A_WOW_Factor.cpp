/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    long long cnt_1 = 0, cnt_2 = 0, cnt_3 = 0;
    for (long long i = 0; i < s.size(); i++) {
        if (s[i] == 'v' && s[i + 1] == 'v') {
            cnt_1 += cnt_2;
            cnt_3++;
        }
        else if (s[i] == 'o') {
            cnt_2 += cnt_3;
        }
    }
    cout << cnt_1 << '\n';
    return 0;
}