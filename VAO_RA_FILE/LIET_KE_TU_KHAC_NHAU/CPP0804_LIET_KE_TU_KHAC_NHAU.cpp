#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream input("VANBAN.in");
    if(!input.is_open()) return 1;

    string s;
    set<string> s1;
    while(input >> s){
        for(char &x : s){
            x = tolower(x);
        }
        s1.insert(s);
    }
    for(string x : s1){
        cout << x << "\n";
    }

    input.close();
    return 0;
}