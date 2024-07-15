/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
const long long maxN = 1e5 + 9;
long long arr[maxN], v[4 * maxN];
 
void build(long long n, long long b, long long e) {
    if (b == e) {
        v[n] = arr[b];
        return;
    }
    long long mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    v[n] = v[l] + v[r];
}
 
void update(long long n, long long b, long long e, long long i, long long val) {
    if (i < b || i > e) {
        return;
    }
    if (b == e) {
        v[n] = val;
        return;
    }
    long long mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, val);
    update(r, mid + 1, e, i, val);
    v[n] = v[l] + v[r];
}
 
long long query(long long n, long long b, long long e, long long i, long long j) {
    if (e < i || b > j) {
        return 0;
    }
    if (b >= i && e <= j) {
        return v[n];
    }
    long long mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, m;
    cin >> n >> m;
    for (long long i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    build(1, 1, n);
    while (m--) {
        long long x;
        cin >> x;
        if (x == 1) {
            long long indx, val;
            cin >> indx >> val;
            indx++;
            update(1, 1, n, indx, val);
        }
        else if (x == 2) {
            long long l, r;
            cin >> l >> r;
            l++;
            long long ans = query(1, 1, n, l, r);
            cout << ans << '\n';
        }
    }
    return 0;
}