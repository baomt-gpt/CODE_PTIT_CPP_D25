#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll fibo[1000001];

int checkFibo(ll n){
    fibo[0] = 0;
    fibo[1] = 1;
    for(ll i = 2; i < 1000000; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for(ll i = 0; i < 1000000; i++){
        if(fibo[i] >= n){
            if(n == fibo[i]) return 1;
        }
    }
    return 0;    
}

int main(){
    int q; cin >> q;
    while(q--){
        ll n; cin >> n;
        if(checkFibo(n)) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}