#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int prime(long long n){
    for(long long i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int is_perfect(long long n){
    for(int p = 1; p <= 33; p++){
        if(prime(p)){
            long long tmp1 = pow(2, p) - 1;
            if(prime(tmp1)){
                long long tmp2 = pow(2, p - 1);
                if(tmp1 * tmp2 == n){
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main(){
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        if(is_perfect(n)) cout << "1";
        else cout << "0";

        cout << endl;
    }

    return 0;
}