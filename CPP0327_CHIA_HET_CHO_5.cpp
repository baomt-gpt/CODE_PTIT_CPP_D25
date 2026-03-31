#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    while(q--){
        string s; cin >> s;
        int res = 0;
        for(char x : s){
            res = (res * 2 + (x - '0')) % 5;
        }
        if(res == 0) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}