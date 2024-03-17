/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    int sum = 0;
    if (a==b) {
        cout << a+b << '\n';
    }
    else if (a > b) {
        sum += a;
        a -= 1;
        if (a > b) {
            sum += a;
            a -= 1;
        }
        else if (a < b) {
            sum += b;
            b -= 1;
        } else {
            sum += a;
        }
        cout << sum << '\n';
    }
    else if (a < b) {
        sum += b;
        b -= 1;
        if (a < b) {
            sum += b;
            b -= 1;
        }
        else if (a > b) {
            sum += a;
            a -= 1;
        } else {
            sum += a;
        }
        cout << sum << '\n';
    }
    return 0;
}