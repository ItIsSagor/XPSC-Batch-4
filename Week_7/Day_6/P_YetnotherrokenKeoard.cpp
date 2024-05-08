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
        string s;
        cin >> s;
        int B = 0, b = 0;
        string t;
        for (int i = s.size()-1; i >= 0; i--) {
            if (s[i] == 'b') {
                b++;
            }
            else if (s[i] == 'B') {
                B++;
            } else {
                if (s[i] >= 'a' && s[i] <= 'z') {
                    if (b) {
                        b--;
                    } else {
                        t.push_back(s[i]);
                    }
                }
                else if (s[i] >= 'A' && s[i] <= 'Z') {
                    if (B) {
                        B--;
                    } else {
                        t.push_back(s[i]);
                    }
                }
            }
        }
        reverse(t.begin(), t.end());
        cout << t << '\n';
    }
    return 0;
}