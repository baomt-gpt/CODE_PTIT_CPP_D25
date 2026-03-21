#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        int d = 0;
        for(auto x : mp){
            if(x.second > 1) d += x.second;
        }
        cout << d;

        cout << endl;
    }

    return 0;
}