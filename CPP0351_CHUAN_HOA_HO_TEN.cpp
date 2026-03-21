#include <bits/stdc++.h>
using namespace std;

void ChuanHoa(string &s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
}

int main(){
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        vector<string> v;
        while(ss >> word) v.push_back(word);
        for(string &x : v){
            ChuanHoa(x);
        }
        if(n == 1){
            cout << v.back();
            for(int i = 0; i < v.size() - 1; i++){
                cout << " " << v[i];
            }
        }
        else{
            for(int i = 1; i < v.size(); i++){
                cout << v[i] << " ";
            }
            cout << v[0];
        }

        cout << endl;
    }

    return 0;
}