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
        int n, idx = -1;
        cin >> n;
        int a = (n*(n-1))/2;
        vector<int> v(a);
        for (int i = 0; i < a; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = n-1; i >= 0; i--) {
            idx += i;
            cout << v[idx] << " ";
        }
        cout << '\n';
    }
    return 0;
}