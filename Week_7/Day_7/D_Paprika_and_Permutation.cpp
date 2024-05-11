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
    vector<int> ans;
    vector<bool> v_2(n + 1, false);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] <= n && !v_2[v[i]]) {
            v_2[v[i]] = true;
        } else {
            ans.push_back(v[i]);
        }
    }
    sort(ans.begin(), ans.end());
    int j = 0, count = 0;
    for (int i = 1; i <= n; i++) {
        if (!v_2[i]) {
            int tmp = (ans[j] - 1) - (ans[j] / 2);
            j++;
            if (i > tmp) {
                cout << -1 << '\n';
                return;
            }
            count++;
        }
    }
    cout << count << '\n';
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