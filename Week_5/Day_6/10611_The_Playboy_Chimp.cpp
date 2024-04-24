/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int find_lower(vector<int>& v, int a) {
    int l = 0, r = v.size()-1, ans = -1, mid;
    while (l <= r) {
        mid = (l+r)/2;
        if (a > v[mid]) {
            ans = v[mid];
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return ans;
}

int find_upper(vector<int>& v, int a) {
    int l = 0, r = v.size()-1, ans = -1, mid;
    while (l <= r) {
        mid = (l+r)/2;
        if (a < v[mid]) {
            ans = v[mid];
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--) {
        int a;
        cin >> a;
        int ans_1 = find_lower(v, a);
        int ans_2 = find_upper(v, a);
        if (ans_1 == -1) {
            cout << "X" << " " << ans_2 << '\n';
        }
        else if (ans_2 == -1) {
            cout << ans_1 << " " << "X" << '\n';
        } else {
            cout << ans_1 << " " << ans_2 << '\n';
        }
    }
    return 0;
}