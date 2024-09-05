/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 9;
long long arr[maxN], v[4 * maxN], lazy[4 * maxN];

void push(int n, int b, int e) {
    if (lazy[n] == 0) {
        return;
    }
    v[n] += (1LL * (e - b + 1) * lazy[n]);
    if (b != e) {
        int l = (2 * n), r = (2 * n) + 1;
        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}

void build(int n, int b, int e) {
    if (b == e) {
        v[n] = arr[b];
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    v[n] = v[l] + v[r];
}

void update(int n, int b, int e, int i, int j, int val) {
    push(n, b, e);
    if (e < i || j < b) {
        return;
    }
    if (b >= i && e <= j) {
        lazy[n] = val;
        push(n, b, e);
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, j, val);
    update(r, mid + 1, e, i, j, val);
    v[n] = v[l] + v[r];
}

long long query(int n, int b, int e, int i, int j) {
    push(n, b, e);
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
    // for (long long i = 1; i <= n; i++) {
    //     cin >> arr[i];
    // }
    build(1, 1, n);
    while (m--) {
        int x;
        cin >> x;
        if (x == 1) {
            int l, r, val;
            cin >> l >> r >> val;
            l++;
            update(1, 1, n, l, r, val);
        } else {
            int l;
            cin >> l;
            l++;
            cout << query(1, 1, n, l, l) << '\n';
        }
    }
    return 0;
}