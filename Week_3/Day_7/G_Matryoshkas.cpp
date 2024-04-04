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
        vector<int> v(n);
        set<int> s;
        map<int, int> mp; 
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            s.insert(v[i]);
            mp[v[i]]++;
        }
        int Final = 0;
        for (int val : s) {
            if (mp[val] > mp[val-1]) {
                Final += mp[val] - mp[val-1];
            }
        }
        cout << Final << '\n';
    }
    return 0;
}