/**
 *    author:  SAGOR AHMED
 *    created: 2 0 2 4       
**/
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        int OutCome = 0;
        while ((OutCome / 2 + 1) * ((OutCome + 1) / 2 + 1) < n) {
            OutCome++;
        }
        cout << OutCome << '\n';
    }
    return 0;
}