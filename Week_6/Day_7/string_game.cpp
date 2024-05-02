/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string str, sub_str;
    cin >> str >> sub_str;
    int n = str.size(), m = sub_str.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    auto ok = [&] (int mid) {
        vector<bool> baad(n+1);
        for (int i = 0; i < mid; i++) {
            baad[v[i]] = true;
        }
        int j = 0;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (str[i] == sub_str[j] && !baad[i+1]) {
                j++;
            }
            if (j == m) {
                found = true;
                break;
            }
        }
        return found;
    };

    int l = 0, r = n, mid, ans = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}