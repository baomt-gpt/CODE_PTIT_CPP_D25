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
        ll a, b;
        cin >> a >> b;
        cout << bcnn(a, b) << " " << ucln(a, b);

        cout << endl;
    }

    return 0;
}