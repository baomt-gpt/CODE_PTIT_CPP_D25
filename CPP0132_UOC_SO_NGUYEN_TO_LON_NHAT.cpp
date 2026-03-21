#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        ll a;
        for(int i = 2; i <= sqrt(n); i++){
            while(n % i == 0){
                n /= i;
                a = i;
            }
        }
        if(n > 1 && n > a) cout << n;
        else cout << a;

        cout << endl;
    }

    return 0;
}