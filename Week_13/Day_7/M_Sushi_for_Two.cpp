/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    bool x_x = true, y_y = true;
    int x = 0, y = 0, OutCome = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i] == 1) {
            y_y = false;
            if (!x_x) {
                x_x = true;
                x = 0;
            }
            x++;
        } else {
            x_x = false;
            if (!y_y) {
                y_y = true;
                y = 0;
            }
            y++;
        }
        OutCome = max(OutCome, min(x, y)*2);
    }
    cout << OutCome << '\n';
    return 0;
}