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
        int n, m;
        cin >> n >> m;
        vector<int> v(m);
        for (int i = 0; i < m; i++) {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        int count = 0;
        long long sum = 0;
        while (count < v.size() && sum + n - v[count] < n) {
            sum += n - v[count++];
        }
        cout << count << '\n';
    }
    return 0;
}