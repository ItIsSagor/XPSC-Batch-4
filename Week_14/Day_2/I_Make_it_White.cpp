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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int left = -1, right = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                if (left == -1) {
                    left = i;
                }
                right = i;
            }
        }
        cout << right - left + 1 << '\n';
    }
    return 0;
}