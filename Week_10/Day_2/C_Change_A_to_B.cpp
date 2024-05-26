/**
 *    author:  SAGOR AHMED
 *    created: M A Y , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        int a, b, k;
        cin >> a >> b >> k;
        int count = 0;
        while (b > a) {
            if (b % k == 0 && b / k >= a) {
                b /= k;
                count++;
            } else {
                if ((b / k) < a) {
                    count += (b - a);
                    b -= (b - a);
                } else {
                    count += (b % k);
                    b -= (b % k);
                }
                if (b <= a) {
                    break;
                }
            }
        }
        cout << count << '\n';
    }
    return 0;
}