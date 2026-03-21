#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        int cnt = 0;
        while(ss >> tmp){
            cnt++;
        }
        cout << cnt;

        cout << endl;
    }

    return 0;
}