#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream input1("DATA1.in");
    ifstream input2("DATA2.in");

    string a, b;
    set<string> s1, s2;
    while(input1 >> a){
        for(char &x : a){
            x = tolower(x);
        }
        s1.insert(a);
    }
    while(input2 >> b){
        for(char &x : b){
            x = tolower(x);
        }
        s2.insert(b);
    }
    map<string, int> mp;
    for(string x : s1){
        mp[x]++;
    }
    for(string x : s2){
        mp[x]++;
    }
    for(auto it : mp){
        cout << it.first << " ";
    }
    cout << "\n";
    for(auto it : mp){
        if(it.second > 1){
            cout << it.first << " ";
        }
    }

    input1.close();
    input2.close();
    return 0;
}