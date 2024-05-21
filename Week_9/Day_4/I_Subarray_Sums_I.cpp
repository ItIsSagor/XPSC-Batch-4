/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, s;
    cin >> n >> s;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i];
    } 
    long long i = 0, j = 0, sum = 0, count = 0;
    while (i < n) {
        sum += v[i];
        while (sum >= s) {
            if (sum == s) {
                count++;
            }
            sum -= v[j];
            j++;
        }
        i++;
    }
    cout << count << '\n';
    return 0;
}