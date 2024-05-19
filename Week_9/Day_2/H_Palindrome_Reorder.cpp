/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    map<char, int> mp;
    int sum = 0, l = 0, r = s.size() - 1;
    string ans;
    ans.append(s.size(), ' ');
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    for (auto it : mp) {
        int x = it.second;
        if (x % 2) {
            sum++;
            if (sum > 1) {
                break;
            }
            ans[s.size() / 2] = it.first;
            x--;
        }
        while (x) {
            ans[l] = it.first;
            ans[r] = it.first;
            l++;
            r--;
            x -= 2;
        }
    }
    if (sum > 1) {
        cout << "NO SOLUTION" << '\n';
    } else {
        cout << ans << '\n';
    }
    return 0;
}