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
    long long sum = 0, count = 0;
    map<long long, long long> mp;
    mp[0]++;
    for (long long i = 0; i < n; i++) {
        sum += v[i];
        count += mp[sum - s];
        mp[sum]++;
    }
    cout << count << '\n';
    return 0;
}