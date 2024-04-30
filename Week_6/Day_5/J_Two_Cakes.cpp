/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    int l = 1, hi = min(a, b);
    while (l < hi) {
        int mid = (l + hi + 1) / 2;
        int s = a/mid + b/mid;
        if (s >= n) {
            l = mid;
        } else {
            hi = mid - 1;
        }
    }
    cout << l << '\n';
    return 0;
}