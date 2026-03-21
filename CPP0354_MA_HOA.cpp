#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        unordered_map<char, int> mp;
        for(char x : s){
            mp[x]++;
        }
        for(char x : s){
            if(mp[x] != 0){
                cout << x << mp[x];
                mp[x] = 0;
            }
        }
        cout << endl;
    }

    return 0;
}