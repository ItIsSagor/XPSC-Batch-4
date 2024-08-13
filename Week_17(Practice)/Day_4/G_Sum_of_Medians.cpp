/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        long long size = n * k;
        long long arr[size];
        long long sum = 0;
        int x = n / 2, y = size - x - 1;
        int cnt = 0;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        while (cnt < k) {
            cnt++;
            sum += arr[y];
            y -= x + 1;
        }
        cout << sum << '\n';
    }
    return 0;
}