#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int q; cin >> q;
    while(q--){
        ll n; cin >> n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        set<ll> st;
        for(ll x : a){
            while(x){
                st.insert(x % 10);
                x /= 10;
            }
        }
        for(ll x : st){
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}