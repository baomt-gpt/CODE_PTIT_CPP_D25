#include <bits/stdc++.h>

using namespace std;

int isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}


int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int ok = 1;
        for(int i = 2; i <= n / 2; i++){
            if(isPrime(i) && isPrime(n - i)){
                cout << i << " " << n - i;
                ok = 0;
                break;
            }
        }
        if(ok) cout << "-1";
        cout << endl;
    }

    return 0;
}