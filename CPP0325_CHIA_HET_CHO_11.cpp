#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    while(q--){
        string s;
        cin >> s;
        int sum = 0;
        for(int i = 0; i < s.length(); i++){
            if(i % 2 == 0){
                sum += s[i] - '0';
            }
            else sum -= s[i] - '0';
        }
        if(sum % 11 == 0) cout << "1\n";
        else cout << "0\n";

    }

    return 0;
}