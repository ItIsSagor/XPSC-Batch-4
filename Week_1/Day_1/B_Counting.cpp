/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    int total = 0;
    if (a < b) {
        for (int i = a; i <= b; i++) {
            total++;
        }
        cout << total << '\n';
    } else {
        cout << 0 << '\n';
    }
    return 0;
}