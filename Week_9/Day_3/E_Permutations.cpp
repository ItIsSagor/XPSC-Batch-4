/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> even, odd;
    if (n == 1) {
        cout << 1 << '\n';
    }
    else if (n <= 3) {
        cout << "NO SOLUTION" << '\n';
    } else {
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                even.push_back(i);
            } else {
                odd.push_back(i);
            }
        }
        for (auto it : even) {
            cout << it << " ";
        }
        for (auto it : odd) {
            cout << it << " ";
        }
        cout << '\n';
    }
    return 0;
}