/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        //ans.push_back(a[i]);
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        //ans.push_back(b[i]);
    }
    // sort(ans.begin(), ans.end());
    // for (int i = 0; i < ans.size(); i++) {
    //     cout << ans[i] << " ";
    // }
    int i = 0, j = 0;
    while (i < n || j < m) {
        if (j == m || i < n && a[i] < b[j]) {
            cout << a[i] << " ";
            i++;
        } else {
            cout << b[j] << " ";
            j++;
        }
    }
    return 0;
}