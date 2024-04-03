/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        set<int> st;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        reverse(arr.begin(), arr.end());
        for (int i = 0; i < n; i++) {
            st.insert(arr[i]);
            if (st.size() < i+1) {
                break;
            }
        }
        int sz = (int)st.size();
        cout << n-sz << '\n';
    }
    return 0;
}