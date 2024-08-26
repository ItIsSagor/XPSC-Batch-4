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
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> odd, even;
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                even.push_back(i + 1);
            } else {
                odd.push_back(i + 1);
            }
        }
        if (odd.size() >= 3) {
            cout << "YES" << '\n' << odd[0] << " " << odd[1] << " " << odd[2] << '\n';
        }
        else if (even.size() >= 2 && odd.size() >= 1) {
            cout << "YES" << '\n' << odd[0] << " " << even[0] << " " << even[1] << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}