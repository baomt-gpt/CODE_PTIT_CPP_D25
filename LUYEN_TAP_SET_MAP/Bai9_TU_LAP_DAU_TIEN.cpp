#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        set<string> st;
        stringstream ss(s);
        string word;
        vector<string> v;
        while(ss >> word){
            v.push_back(word);
        }
        for(string x : v){
            if(!st.count(x)){
                cout << x; break;
            }
            st.insert(x);
        }

        cout << endl;
    }

    return 0;
}