#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    cin.ignore();
    map<string, int> mp;
    while(q--){
        string username;
        getline(cin, username);
        if(mp.find(username) == mp.end()){
            cout << username << endl;
        }
        else cout << username << mp[username] << endl;
        mp[username]++;

    }

    return 0;
}