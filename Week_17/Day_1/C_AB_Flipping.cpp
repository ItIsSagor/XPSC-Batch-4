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
        while (!s.empty() && s.back() == 'A') {
            s.pop_back();
        }
        int OutCome = s.size() - 1;
        if (OutCome < 0) {
            OutCome = 0;
        }
        for (int i = 0; i < s.size() - 1; ++i) {
            if (s[i] == 'B') {
                OutCome--;
            } else {
                break;
            }
        }
        cout << OutCome << '\n';
    }
    return 0;
}