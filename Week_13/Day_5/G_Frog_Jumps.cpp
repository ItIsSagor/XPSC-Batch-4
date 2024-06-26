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
        string s;
        cin >> s;
        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R') {
                v.push_back(i + 1);
            }
        }
        v.push_back(s.size() + 1);
        int OutCome = 0;
        for (int i = 0; i < v.size() - 1; i++) {
            OutCome = max(OutCome, v[i + 1] - v[i]);
        }
        cout << OutCome << '\n';
    }
    return 0;
}