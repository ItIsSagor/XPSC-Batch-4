/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

const int maxN = (1 << 15);
vector<int> all_palindromes;

void palindrme() {
    for (int i = 0; i < maxN; i++) {
        string s = to_string(i);
        int len = s.length();
        bool ok = true;
        for (int i = 0; i < (len/2); i++) {
            if (s[i] != s[len - i - 1]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            all_palindromes.push_back(i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    palindrme();
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> cnt(maxN), v;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
            v.push_back(x);
        }
        long long ans = n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < all_palindromes.size(); j++) {
                int curr = (v[i] ^ all_palindromes[j]);
                ans += cnt[curr];
            }
        }
        cout << (ans / 2) << '\n';
    }
    return 0;
}