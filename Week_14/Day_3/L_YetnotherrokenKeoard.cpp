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
        string s;
        cin >> s;
        int small = 0, big = 0;
        string ans;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'b') {
                small++;
            } 
            else if (s[i] == 'B') {
                big++;
            } else {
                if (s[i] >= 'a' && s[i] <= 'z') {
                    if (small) {
                        small--;
                    } else {
                        ans.push_back(s[i]);
                    }
                }
                else if (s[i] >= 'A' && s[i] <= 'Z') {
                    if (big) {
                        big--;
                    } else {
                        ans.push_back(s[i]);
                    }
                }
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }
    return 0;
}