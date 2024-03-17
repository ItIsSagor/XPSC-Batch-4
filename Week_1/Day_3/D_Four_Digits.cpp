/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string digits;
    cin >> digits;
    if (digits.size() == 4) {
        cout << digits << '\n';
        return 0;
    }
    int total_zeros = 4 - digits.size();
    for (int i = 0; i < total_zeros; i++) {
        cout << 0;
    }
    cout << digits << '\n';

    // int n;
    // cin >> n;
    // int cnt = 0;
    // while (n != 0) {
    //     int r = n%10;
    //     cnt++;
    //     n/=10;
    // }
    
    return 0;
}