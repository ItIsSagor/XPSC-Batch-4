/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>
// 314159265 358979323846264338
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long x, y;
    cin >> x >> y;
    long long cnt = 0;
    for (long long i = x; i <= y; i*=2) {
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}