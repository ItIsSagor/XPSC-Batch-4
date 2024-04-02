/**
 *    author:  SAGOR AHMED
 *    created: M A R C H , 2024       
**/
#include <bits/stdc++.h>

using namespace std;

char getAnswer(string str_1, string str_2) {
    int sizeofStr_1 = str_1.size(), sizeofStr_2 = str_2.size();
    int OutCome_1 = str_1[sizeofStr_1-1], OutCome_2 = str_2[sizeofStr_2-1];
    if (OutCome_1 > OutCome_2) {
        return '<';
    }
    if (OutCome_1 < OutCome_2) {
        return '>';
    }
    if (OutCome_1 == 'S') {
        swap(sizeofStr_1, sizeofStr_2);
    }
    if (sizeofStr_1 > sizeofStr_2) {
        return '>';
    }
    if (sizeofStr_1 < sizeofStr_2) {
        return '<';
    }
    return '=';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while (tt--) {
        string str_1, str_2;
        cin >> str_1 >> str_2;
        cout << getAnswer(str_1, str_2) << '\n';
    }
    return 0;
}