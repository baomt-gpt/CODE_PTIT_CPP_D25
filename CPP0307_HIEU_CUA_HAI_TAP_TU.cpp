#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        set<string> st1;
        set<string> st2;
        
        stringstream ss1(s1);
        string word;
        while(ss1 >> word){
            st1.insert(word);
        }

        stringstream ss2(s2);
        while(ss2 >> word){
            st2.insert(word);
        }

        for(string x : st1){
            if(!st2.count(x)) cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}