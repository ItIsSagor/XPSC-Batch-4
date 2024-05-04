/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

void fun() {
    int n;
    cin >> n;
    vector<int> v_1(n), v_2(n);
    for (int i = 0; i < n; i++) {
        cin >> v_1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> v_2[i];
    }
    sort(v_1.begin(), v_1.end());
    sort(v_2.begin(), v_2.end());
    for (int i = 0; i < n; i++) {
        if (v_1[i] != v_2[i] && v_1[i] + 1 != v_2[i]) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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