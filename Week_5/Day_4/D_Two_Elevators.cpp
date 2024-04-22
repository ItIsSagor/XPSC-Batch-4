/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long final = 0;
        int ans_1 = a - 1, ans_2 = abs(b - c) + (c - 1);
        if (ans_1 <= ans_2) {
            final += 1;
        }
        if (ans_1 >= ans_2) {
            final += 2;
        }
        cout << final << '\n';
    }
    return 0;
}