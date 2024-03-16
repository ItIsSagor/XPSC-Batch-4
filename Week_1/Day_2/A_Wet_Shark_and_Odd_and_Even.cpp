/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<long long> v(n);
    long long sum = 0;
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    if (sum % 2 == 0) {
        cout << sum << '\n';
    } else {
        sort(v.begin(), v.end());
        for (long long i = 0; i < v.size(); i++) {
            if ((sum-v[i]) % 2 == 0) {
                cout << sum-v[i];
                break;
            }
        }
    }
    return 0;
}