#include <bits/stdc++.h>
using namespace std;
int main(){
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        vector<long long> a(n, -1);
        for(int i = 0; i < n; i++){
            long long x; cin >> x;
            if(x >= 0 && x < n){
                a[x] = x;
            }
        }
        for(long long x : a){
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}