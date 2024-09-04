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
        int n;
        string s;
        cin >> n >> s;
        map<char, int> mp;
        for (auto x : s) {
            mp[x]++;
        }
        string OutCome;
        while (mp.size()) {
            vector<int> rem;
            for (auto [x, y] : mp) {
                mp[x]--;
                OutCome += x;
                if (y == 1) {
                    rem.push_back(x);
                }
            }
            for (auto x : rem) {
                mp.erase(x);
            }
        }
        cout << OutCome << '\n';
    }
    return 0;
}