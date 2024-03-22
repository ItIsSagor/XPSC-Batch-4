/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i]!=t[i]) {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}