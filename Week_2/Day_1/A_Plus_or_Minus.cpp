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
        int a, b, c;
        cin >> a >> b >> c;
        if (a+b==c) {
            cout << "+" << '\n';
        } else {
            cout << "-" << '\n';
        }
    }
    return 0;
}