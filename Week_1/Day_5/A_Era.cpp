/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
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
        int arr[n];
        int mx = INT_MIN;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            mx = max(mx, arr[i]-i);
        }
        cout << mx << '\n';
    }
    return 0;
}