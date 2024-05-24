/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(500000);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v[x]++;
    }
    int ans = 1;
    for (int i = 2; i <= 100000; i++) {
        int count = 0;
        for (int j = i; j <= 100000; j += i) {
            count += v[j];
        }
        ans = max(ans, count);
    }
    cout << ans << '\n';
    return 0;
}