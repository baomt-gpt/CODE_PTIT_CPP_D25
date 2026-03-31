#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int q; cin >> q;
    while(q--){
        int n; cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int pos = 0;
        for(int i = 0; i < n; i++){
            if(a[i] != 0){
                swap(a[i], a[pos]);
                pos++;
            }
        }
        sort(a.begin(), a.begin() + pos);
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}