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
        char ch;
        string s;
        cin >> n >> ch;
        cin >> s;
        vector<char> v;
        for (int i = 0; i < n; i++) {
            v.push_back(s[i]);
        }
        for (int i = 0; i < n; i++) {
            v.push_back(s[i]);
        }
        int mx = INT_MIN;
        int cnt = 0;
        bool OutCome = true;
        for (int i = 0; i < v.size(); i++) {
            if (v[i]==ch && OutCome) {
                OutCome = false;
                cnt = 0;
            }
            if (!OutCome) {
                cnt++;
            }
            if (v[i]=='g') {
                mx = max(mx, cnt);
                OutCome = true;
            }
        }
        cout << mx-1 << '\n';
    }
    return 0;
}