/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        string s, ss;
        set<int> st;
        vector<int> ans;
        cin >> s;
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            st.insert(x);
        }
        for (auto it : st) {
            ans.push_back(it);
        }
        cin >> ss;
        sort(ss.begin(), ss.end());
        for (int i = 0; i < ans.size(); i++) {
            s[ans[i] - 1] = ss[i];
        }
        cout << s << '\n';
    }
    return 0;
}