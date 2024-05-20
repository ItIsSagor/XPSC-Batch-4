/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    set<int> st;
    int i = 0, j = 0, maxCount = 0;
    while (i < n && j < n) {
        while (j < n && !st.count(v[j])) {
            st.insert(v[j]);
            maxCount = max(maxCount, j - i + 1);
            j++;
        }
        while (j < n && st.count(v[j])) {
            st.erase(v[i]);
            i++;
        }
    }
    cout << maxCount << '\n';
    return 0;
}