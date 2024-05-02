/**
 *    author:  SAGOR AHMED
 *    created: A P R I L , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

void fun () {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = n; i > 0; i--) {
        int x = n-1, rounds = 0;
        int move = rounds;
        while (rounds < i && x >= move) {
            int a = 0;
            move = rounds;
            while (!a && x >= move) {
                if (v[x] <= i + 1 - (rounds + 1)) {
                    rounds++;
                    a = 1;
                }
                x--;
            }
        }
        if (rounds == i) {
            cout << i << '\n';
            return;
        }
    }
    cout << 0 << '\n';
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        fun();
    }
    return 0;
}