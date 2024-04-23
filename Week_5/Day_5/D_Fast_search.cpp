/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int find_lower(vector<int>& v, int x) {
    int ans = -1, mid, l = 0, r = v.size()-1;
    while (l <= r) {
        mid = (l+r)/2;
        if (v[mid] >= x) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int find_upper(vector<int>& v, int x) {
    int ans = -1, mid, l = 0, r = v.size()-1;
    while (l <= r) {
        mid = (l+r)/2;
        if (v[mid] <= x) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
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
        int a, b;
        cin >> a >> b;
        int ans_1 = find_lower(v, a);
        int ans_2 = find_upper(v, b);
        if (ans_1 == -1 || ans_2 == -1) {
            cout << 0 << " ";
        } else {
            cout << ans_2 -ans_1 + 1 << " ";
        }
    }
    return 0;
}