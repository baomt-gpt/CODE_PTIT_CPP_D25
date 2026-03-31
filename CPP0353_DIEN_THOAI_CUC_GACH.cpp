#include <bits/stdc++.h>
using namespace std;

char Number(char x){
    if(x >= 'A' && x <= 'C') return '2';
    if(x >= 'D' && x <= 'F') return '3';
    if(x >= 'G' && x <= 'I') return '4';
    if(x >= 'J' && x <= 'L') return '5';
    if(x >= 'M' && x <= 'O') return '6';
    if(x >= 'P' && x <= 'S') return '7';
    if(x >= 'T' && x <= 'V') return '8';
    if(x >= 'W' && x <= 'Z') return '9';
}

int ThuanNghich(string s){
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] != s[n - i - 1]) return 0;
    }
    return 1;
}

int main(){
    int q; cin >> q;
    while(q--){
        string s; cin >> s;
        for(char &x : s){
            x = toupper(x);
        }
        string res = "";
        for(char x : s){
            res += Number(x);
        }
        if(ThuanNghich(res)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}