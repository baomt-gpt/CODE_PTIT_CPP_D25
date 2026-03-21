#include <bits/stdc++.h>
using namespace std;
//SET
// int main(){
//     int q; cin >> q;
//     cin.ignore();
//     while(q--){
//         string s;
//         getline(cin, s);
//         stringstream ss(s);
//         string tmp;
//         set<string> st;
//         while(ss >> tmp){
//             st.insert(tmp);
//         }
//         cout << st.size();

//         cout << endl;
//     }

//     return 0;
// }

//MAP
int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        map<string, bool> mp;
        while(ss >> tmp){
            mp[tmp] = true;
        }
        cout << mp.size();

        cout << endl;
    }

    return 0;
}