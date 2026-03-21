#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    for(char x : s){
        if(x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' && x != 'y'){
            cout << "." << x;
        }
    }

    return 0;
}