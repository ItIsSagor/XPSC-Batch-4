/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+5;
vector<int> v[N];
long long touch[N];
bool visit[N];

void findDfs(int src) {
    bool emptyChild = true;
    visit[src] = true;

    for (int it : v[src]) {
        if (!visit[it]) {
            emptyChild = false;
            findDfs(it);
            touch[src] += touch[it];
        }
    }
    if (emptyChild) {
        touch[src]++;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            v[i].clear();
            visit[i] = false;
            touch[i] = 0;
        }
        n--;
        while (n--) {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        findDfs(1);
        int quer;
        cin >> quer;
        while (quer--) {
            int x, y;
            cin >> x >> y;
            cout << touch[x] * touch[y] << '\n';
        }
    }
    return 0;
}