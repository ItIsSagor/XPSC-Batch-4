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
        string s;
        cin >> n >> s;
        string ss = "Timru";
        sort(s.begin(), s.end());
        if (s==ss) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}