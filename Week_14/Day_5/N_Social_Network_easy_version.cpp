/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (find(v.begin(), v.end(), x) == v.end()) {
            if (v.size() >= k) {
                v.pop_back();
            }
            v.insert(v.begin(), x);
        }
    }
    cout << v.size() << '\n';
    for (auto it : v) {
        cout << it << " ";
    }
    return 0;
}