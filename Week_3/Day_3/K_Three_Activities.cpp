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

        vector<pair<int, int>> a, b, c;
        int val;
        for (int i = 0; i < n; i++) {
            cin >> val;
            a.push_back({val, i});
        }    
        for (int i = 0; i < n; i++) {
            cin >> val;
            b.push_back({val, i});
        }    
        for (int i = 0; i < n; i++) {
            cin >> val;
            c.push_back({val, i});
        }    
        
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        sort(c.rbegin(), c.rend());

        int mx = INT_MIN;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    if (a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second) {
                        mx = max(mx, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout << mx << '\n';
    }
    return 0;
}