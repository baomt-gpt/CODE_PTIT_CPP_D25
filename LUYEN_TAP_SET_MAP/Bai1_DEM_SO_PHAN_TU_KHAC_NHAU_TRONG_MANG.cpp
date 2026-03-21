#include <bits/stdc++.h>
using namespace std;
//SET
// int main(){
//     int q; 
//     cin >> q;
//     while(q--){
//         int n; 
//         cin >> n;
//         set<int> st;
//         for(int i = 0; i < n; i++){
//             int x; cin >> x;
//             st.insert(x);
//         }
//         cout << st.size();

//         cout << endl;
//     }

//     return 0;
// }

//MAP
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        map<int, bool> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x] = true;
        }
        cout << mp.size();

        cout << endl;
    }

    return 0;
}