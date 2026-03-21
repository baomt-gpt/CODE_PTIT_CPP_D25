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

ll bcnn(ll a, ll b){
    return a * b / ucln(a, b);
}


int main(){
    int q;
    cin >> q;
    while(q--){
        ll x, y, z, n;
        cin >> x >> y >> z >> n;
        ll start = pow(10, n - 1);
        ll end = pow(10, n) - 1;
        ll bc = bcnn(bcnn(x, y), z);
        if(bc > end){
            cout << "-1";
        }
        else if(start % bc == 0){
            cout << start;
        }
        else{
            ll d = start / bc;
            cout << bc * (d + 1);
        }

        cout << endl;
    }

    return 0;
}