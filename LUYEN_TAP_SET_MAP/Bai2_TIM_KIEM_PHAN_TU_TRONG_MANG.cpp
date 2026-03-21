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
//         int k; cin >> k;
//         for(int i = 0; i < k; i++){
//             int a; cin >> a;
//             if(st.count(a)) cout << "YES\n";
//             else cout << "NO\n";
//         }

//         cout << endl;
//     }

//     return 0;
// }

int main(){
    int q;
    cin >> q;
    while(q--){
        int n; cin >> n;
        map<int, bool> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x] = true;
        }
        int t; cin >> t;
        while(t--){
            int a; cin >> a;
            if(mp.count(a)) cout << "YES\n";
            else cout << "NO\n";
        }

        cout << endl;
    }

    return 0;
}