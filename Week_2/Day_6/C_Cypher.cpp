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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            string s;
            cin >> s;
            for (int j = 0; j < b; j++) {
                if (s[j] == 'U') {
                    v[i]--;
                }
                else if (s[j] == 'D') {
                    v[i]++;
                }
                if (v[i] < 0) {
                    v[i]+=10;
                }
                else if (v[i] > 9) {
                    v[i]-=10;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            cout << v[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}