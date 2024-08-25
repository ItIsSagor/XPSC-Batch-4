/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

void fun() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (n % 2 == 1) {
        cout << "NO" << '\n';
        return;
    }
    for (int i = 0; i < n / 2; i++) {
        if (v[i] == v[i + n / 2]) {
            cout << "NO" << '\n';
            return;
        }
        if (i + 1 < n / 2 && v[i + 1] == v[i + n / 2]) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
    for (int i = 0; i < n / 2; i++) {
        cout << v[i] << " " << v[i + n / 2] << " ";
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        fun();
    }
    return 0;
}