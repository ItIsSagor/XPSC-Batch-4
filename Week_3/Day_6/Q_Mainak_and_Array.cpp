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
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }
        int OutCome = arr[n]-arr[1];
        for (int i = 1; i < n; i++) {
            OutCome = max(OutCome, arr[n]-arr[i]);
        }
        for (int i = 2; i <= n; i++) {
            OutCome = max(OutCome, arr[i-1]-arr[i]);
        }
        for (int i = 2; i <= n; i++) {
            OutCome = max(OutCome, arr[i]-arr[1]);
        }
        cout << OutCome << '\n';
    }
    return 0;
}