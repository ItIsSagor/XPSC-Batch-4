/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

const int N = (int)1e6 + 5;
int v[N];

int fun(int l, int r) {
    if (r - l == 1) {
        return 0;
    }
    int mid = (l + r) / 2;
    int ans = 0, mx_l = -1, mx_r = -1;
    for (int i = l; i < mid; i++) {
        mx_l = max(mx_l, v[i]);
    }
    for (int i = mid; i < r; i++) {
        mx_r = max(mx_r, v[i]);
    }
    if (mx_l > mx_r) {
        ans++;
        for (int i = 0; i < mid - l; i++) {
            swap(v[l + i], v[mid + i]);
        }
    }
    return ans + fun(l, mid) + fun(mid, r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ans = fun(0, n);
        if (is_sorted(v, v + n)) {
            cout << ans << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}