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
        int x;
        cin >> x;
        int cnt = 2;
        while (cnt <= x) {
            cnt *= 2;
        }
        cout << x - (cnt - x) << '\n';
    }
    return 0;
}