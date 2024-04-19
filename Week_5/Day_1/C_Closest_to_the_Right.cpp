/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    while (k--) {
        int x;
        cin >> x;
        int l = 0, r = n-1, mid, ans = n;
        while (l <= r) {
            mid = (l+r)/2;
            if (x <= v[mid]) {
                ans = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans+1 << '\n';
    }
    return 0;
}