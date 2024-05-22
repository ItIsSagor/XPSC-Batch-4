/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

void fun() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int>  mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mp[v[i]]++;
    }
    int found = 0;
    for (int i = 0; i <= n + 1; i++) {
        if (mp[i] == 0) {
            cout << i << '\n';
            return;
        }
        if (mp[i] == 1) {
            if (found == 1) {
                cout << i << '\n';
                return;
            }
            found = 1;
        }
    }
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