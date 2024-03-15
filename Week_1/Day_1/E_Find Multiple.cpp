/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    int ans;
    bool found = false;
    for (int i = a; i <= b; i++) {
        if (i%c==0) {
            found = true;
            ans = i;
            break;
        }
    }
    if (found) {
        cout << ans << '\n';
    } else {
        cout << -1 << '\n';
    }
    return 0;
}