#include <bits/stdc++.h>
using namespace std;
//SET
// int main(){
//     int q;
//     cin >> q;
//     while(q--){
//         int n, m; cin >> n >> m;
//         int a[n], b[m];
//         for(int &x : a) cin >> x;
//         set<int> st;
//         for(int i = 0; i < m; i++){
//             int x; cin >> x;
//             st.insert(x);
//         }
//         bool ok = false;
//         for(int x : a){
//             if(!st.count(x)){
//                 cout << x << " ";
//                 ok = true;
//             }
//         }
//         if(!ok) cout << "NOT FOUND\n";
//         else cout << endl;
//     }

//     return 0;
// }

int main(){
    int q;
    cin >> q;
    while(q--){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for(int &x : a) cin >> x;
        map<int, bool> mp;
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            mp[x] = true;
        }
        bool ok = false;
        for(int x : a){
            if(!mp.count(x)){
                cout << x << " ";
                ok = true;
            }
        }
        if(!ok) cout << "NOT FOUND\n";
        else cout << endl;
    }

    return 0;
}