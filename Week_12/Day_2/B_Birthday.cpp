/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n), s(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            s[left] = v[i];
            left++;
        } else {
            s[right] = v[i];
            right--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout <<  s[i] << " ";
    }
    cout << '\n';
    return 0;
}