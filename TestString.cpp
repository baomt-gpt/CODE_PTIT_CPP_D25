#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<char, int> x, pair<char, int> y){
    return x.second > y.second;
}

int main(){
    int q; cin >> q;
    while(q--){
        string s; cin >> s;
        for(char &x : s){
            x = tolower(x);
        }
        map<char, int> mp;
        for(char x : s){
            mp[x]++;
        }
        vector<pair<char, int>> v;
        for(auto it : mp){
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end(), cmp);
        for(auto x : v){
            for(int i = 0; i < x.second; i++){
                cout << x.first;
            }
        }
        cout << "\n";
    }

    return 0;
}