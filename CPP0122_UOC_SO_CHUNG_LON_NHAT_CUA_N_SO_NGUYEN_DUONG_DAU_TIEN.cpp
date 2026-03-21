#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll ucln(ll a, ll b){
    if(b == 0) return a;
    while(b){
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}


int main(){
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        ll x = 1;
        for(ll i = 1; i <= n; i++){
            x = x * i / ucln(x, i);
        }
        cout << x;

        cout << endl;
    }

    return 0;
}