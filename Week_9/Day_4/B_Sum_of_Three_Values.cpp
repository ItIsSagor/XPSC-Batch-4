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
    vector<pair<long long, long long>> v(n);
    for (long long i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    for (long long i = 0; i < n; i++) {
        long long ss = s - v[i].first;
        for (long long j = i + 1, k = n - 1; j < k; j++) {
            while (v[j].first + v[k].first > ss) {
                k--;
            }
            if (j < k && v[j].first + v[k].first == ss) {
                cout << v[i].second << " " << v[j].second << " " << v[k].second << '\n';
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE" << '\n';
    return 0;
}