#include <bits/stdc++.h>
using namespace std;

int check(string s){
    if(s[0] == '0') return -1;
    set<char> st;
    for(char x : s){
        if(!isdigit(x)) return -1;
        st.insert(x);
    }
    if(st.size() != 10) return 0;
    return 1;
}


int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s;
        cin >> s;
        int res = check(s);
        if(res == -1) cout << "INVALID";
        else if(res == 1) cout << "YES";
        else cout << "NO";

        cout << endl;
    }

    return 0;
}