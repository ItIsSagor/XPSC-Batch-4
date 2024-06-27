/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v[i] += ans;
        ans = max(ans, v[i]);
        cout << v[i] << " ";
    }
    return 0;
}