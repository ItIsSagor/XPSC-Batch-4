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
        set<int> v;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.insert(x);
        }
        if ((n-v.size()) % 2 == 0) {
            cout << v.size() << '\n';
        } else {
            cout << v.size()-1 << '\n';
        }
    }
    return 0;
}