#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        for(int i = 2; i <= sqrt(n); i++){
            while(n % i == 0){
                cout << i << " ";
                n /= i;
            }
        }
        if(n > 1) cout << n;

        cout << endl;
    }

    return 0;
}