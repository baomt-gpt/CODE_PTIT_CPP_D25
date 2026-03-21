#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        map<char, int> mp;
        for(char x : s){
            mp[x]++;
        }
        char res; int fres = INT_MIN;
        for(auto it : mp){
            if(it.second > fres){
                fres = it.second;
                res = (char)it.first;
            }
        }
        cout << (char)res;

        cout << endl;
    }

    return 0;
}