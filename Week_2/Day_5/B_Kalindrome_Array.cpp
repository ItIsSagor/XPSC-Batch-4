/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

bool check_Palindrome(vector<int> &v, int num, int n) {
    vector<int> extra;
    for (int i = 0; i < n; i++) {
        if (v[i] != num) {
            extra.push_back(v[i]);
        }
    }
    int x = 0, y = extra.size()-1;
    while (x<=y) {
        if (extra[x] != extra[y]) {
            return false;
        }
        x++;
        y--;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (v==vector<int>(v.rbegin(), v.rend())) {
            cout << "YES" << '\n';
            continue;
        }
        int x = 0, y = n-1;
        bool found = false;
        while (x <= y) {
            if (v[x] != v[y]) {
                found = check_Palindrome(v, v[x], n) || check_Palindrome(v, v[y], n);
                break;
            }
            if (found) {
                break;
            }
            x++;
            y--;
        }
        if (found) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}