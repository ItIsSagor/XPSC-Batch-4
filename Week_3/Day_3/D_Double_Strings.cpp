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
        vector<string> v(n);
        map<string, bool> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]] = true;
        }
        for (int i = 0; i < n; i++) {
            bool found = false;
            string currValue = v[i];
            for (int j = 1; j < currValue.size(); j++) {
                string prefixString = currValue.substr(0, j);
                string suffixString = currValue.substr(j, currValue.size()-1);
                if (mp[prefixString] && mp[suffixString]) {
                    found = true;
                }
            }
            cout << found;
        }
        cout << '\n';
    }
    return 0;
}