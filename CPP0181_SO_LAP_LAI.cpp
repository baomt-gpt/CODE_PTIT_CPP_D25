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
    int t;
    cin >> t;
    while(t--){
        ll a, p, q;
        cin >> a >> p >> q;
        ll d = ucln(p, q);
        for(int i = 1; i <= d; i++){
            cout << a;
        }

        cout << endl;
    }

    return 0;
}