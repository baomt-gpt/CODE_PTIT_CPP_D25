#include <bits/stdc++.h>
using namespace std;

bool ChiaHetCho5(string s){
    return (s[0] != '0' && (s[s.size() - 1] == '0' || s[s.size() - 1] == '5'));
}


int main(){
    int q; cin >> q;
    while(q--){
        string s; cin >> s;
        if(ChiaHetCho5(s)) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}