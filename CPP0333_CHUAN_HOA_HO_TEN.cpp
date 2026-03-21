#include <bits/stdc++.h>
using namespace std;

void VietHoa(string &s){
    for(int i = 0; i < s.length(); i++){
        s[i] = toupper(s[i]);
    }
}

void ChuanHoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
}

int main(){
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string word;
    while(ss >> word) v.push_back(word);
    for(int i = 0; i < v.size() - 1; i++){
        ChuanHoa(v[i]);
        cout << v[i];
        if(i == v.size() - 2) cout << ", ";
        else cout << " ";
    }
    VietHoa(v.back());
    cout << v.back();

    return 0;
}