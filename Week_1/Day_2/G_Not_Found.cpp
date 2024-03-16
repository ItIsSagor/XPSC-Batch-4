/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    string ss = "abcdefghijklmnopqrstuvwxyz";
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (s[i]==s[j]) {
                break;
            }
        }
        if (j==i) {
            ans += s[i];
        }
    }
    sort(ans.begin(), ans.end());
    bool found = true;
    int n;
    for (int i = 0; i < 26; i++) {
        if (ss[i] != ans[i]) {
            n = i;
            found = false;
            break;
        }
    }
    if (found) {
        cout << "None" << '\n';
    } else {
        cout << (char)(n+'a') << '\n';
    }
    return 0;
}