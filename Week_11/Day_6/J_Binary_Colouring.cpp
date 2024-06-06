/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
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
        vector<int> v;
        while (n > 0) {
            if (n % 2 == 0) {
                v.push_back(0);
            } else {
                if ((n / 2) % 2 == 0 || n == 1) {
                    v.push_back(1);
                } else {
                    v.push_back(-1);
                    n++;
                }
            }
            n /= 2;
        }
        cout << v.size() << '\n';
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}