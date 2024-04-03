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
    stack<string> st;
    set<string> ss;
    while (tt--) {
        string s;
        cin >> s;
        st.push(s);
    }
    while (!st.empty()) {
        string str = st.top();
        st.pop();
        if (ss.count(str) > 0) {
            continue;
        }
        int size = str.length();
        cout << str[size-2] << str[size-1];
        ss.insert(str);
    }
    return 0;
}