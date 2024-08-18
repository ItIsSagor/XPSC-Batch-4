/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>

using namespace std;

const int maxN = 1e5 + 9, inf = 1e9 + 9;
int arr[maxN];

struct node {
    int mn, count;
};

node v[maxN * 4];

node merge(node l, node r) {
    node ans;
    ans.mn = min(l.mn, r.mn);
    ans.count = 0;
    if (l.mn == ans.mn) {
        ans.count += l.count;
    }
    if (r.mn == ans.mn) {
        ans.count += r.count;
    }
    return ans;
}

void build(int n, int b, int e) {
    if (b == e) {
        v[n].mn = arr[b];
        v[n].count = 1;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    v[n] = merge(v[l], v[r]);
}

void update(int n, int b, int e, int i, int val) {
    if (i < b || i > e) {
        return;
    }
    if (b == e) {
        v[n].mn = val;
        v[n].count = 1;
        return;
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    update(l, b, mid, i, val);
    update(r, mid + 1, e, i, val);
    v[n] = merge(v[l], v[r]);
}

node query(int n, int b, int e, int i, int j) {
    if (e < i || b > j) {
        return {inf, 1};
    }
    if (b >= i && e <= j) {
        return v[n];
    }
    int mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    build(1, 1, n);
    while (m--) {
        int x;
        cin >> x;
        if (x == 1) {
            int indx, val;
            cin >> indx >> val;
            indx++;
            update(1, 1, n, indx, val);
        }
        else if (x == 2) {
            int l, r;
            cin >> l >> r;
            l++;
            node ans = query(1, 1, n, l, r);
            cout << ans.mn << " " << ans.count << '\n';
        }
    }
    return 0;
}