/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n;
    vector<int> male(n);
    for (int i = 0; i < n; i++) {
        cin >> male[i];
    }
    cin >> m;
    vector<int> female(m);
    for (int i = 0; i < m; i++) {
        cin >> female[i];
    }
    int cnt = 0;
    sort(male.begin(), male.end());
    sort(female.begin(), female.end());
    for (int i = 0, j = 0; i < n && j < m; ) {
        if (abs(male[i] - female[j]) <= 1) {
            cnt++;
            i++;
            j++;
        } else {
            if (male[i] > female[j]) {
                j++;
            } else {
                i++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}