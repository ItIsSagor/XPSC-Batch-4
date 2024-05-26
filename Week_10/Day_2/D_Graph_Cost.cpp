/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
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
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        stack<int> value;
        stack<int> indx;
        long long total = 0;
        for (int i = 0; i < n; i++) {
            while (value.size() > 1 && value.top() > arr[i]) {
                int cur = value.top();
                value.pop();
                if (cur >= value.top()) {
                    indx.pop();
                } else {
                    value.push(cur);
                    break;
                }
            }
            value.push(arr[i]);
            indx.push(i);
        }
        int lastItem = value.top();
        value.pop();
        int lastIndx = indx.top();
        indx.pop();
        while (!indx.empty()) {
            total += max(lastItem, value.top()) * (lastIndx - indx.top());
            lastItem = value.top();
            value.pop();
            lastIndx = indx.top();
            indx.pop();
        }
        cout << total << '\n';
    }
    return 0;
}