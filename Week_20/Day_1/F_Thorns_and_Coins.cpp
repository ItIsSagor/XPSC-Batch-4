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
        int count = 0, n;
        string s;
        cin >> n >> s;
        int d = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '*' && s[i+1] == '*') {
                d = i;
                break;
            }
            else if (s[i] == '@') {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}