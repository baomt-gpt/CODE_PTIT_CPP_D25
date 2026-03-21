#include <bits/stdc++.h>

using namespace std;

int isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int ucln(int a, int b){
    if(b == 0) return a;
    while(b){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(){
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        int cnt = 0;
        for(int i = 1; i <= x; i++){
            if(ucln(i, x) == 1){
                cnt++;
            }
        }
        cout << isPrime(cnt);

        cout << endl;
    }

    return 0;
}