#include <bits/stdc++.h>
using namespace std;
//SET
// int main(){
//     int q; cin >> q;
//     cin.ignore();
//     while(q--){
//         string s;
//         getline(cin, s);
//         set<char> st;
//         for(char x : s){
//             st.insert(tolower(x));
//         }
//         if(st.size() == 26) cout << "YES";
//         else cout << "NO";

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
        map<char, bool> mp;
        for(char x : s){
            mp[tolower(x)]++;
        }
        if(mp.size() == 26) cout << "YES";
        else cout << "NO";

        cout << endl;
    }

    return 0;
}