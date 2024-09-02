/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p') {
                cnt++;
                s[i+2]='#';
            }
            if (s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e') {
                cnt++;
                s[i+2]='#';
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}