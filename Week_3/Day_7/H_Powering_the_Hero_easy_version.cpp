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
        int n;
        cin >> n;
        vector<int> v(n);
        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long OutCome = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == 0 && pq.size()) {
                OutCome += pq.top();
                pq.pop();
            } else {
                pq.push(v[i]);
            }
        }
        cout << OutCome << '\n';
    }
    return 0;
}