/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int min = INT_MIN, max = INT_MAX, count = 0;
        queue<int> qu;
        while (n--) {
            int a, x;
            cin >> a >> x;
            if (a == 1) {
                if (min < x) {
                    min = x;
                }
            }
            else if (a == 2) {
                if (x < max) {
                    max = x;
                }
            }
            else if (a == 3) {
                qu.push(x);
            }
        }
        while (!qu.empty()) {
            if (qu.front() >= min && qu.front() <= max) {
                count++;
            }
            qu.pop();
        }
        int res = max-min+1-count;
        if (res >= 0) {
            cout << res << endl;
        } else cout << 0 << endl;
    }
    return 0;
}