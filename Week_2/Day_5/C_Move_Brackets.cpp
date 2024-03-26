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
        string s;
        cin >> n >> s;
        stack<char> st;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i]=='(') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    cnt++;
                } else if (s[i]==')' && st.top()=='(') {
                    st.pop();
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}