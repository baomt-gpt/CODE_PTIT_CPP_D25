#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int fibo[23];

int check(int n){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i < 21; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for(int i = 0; i < 21; i++){
        if(fibo[i] >= n){
            if(n == fibo[i]) return 1;
        }
    }
    return 0;
}

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(check(a[i])) cout << a[i] << " ";
        }


        cout << endl;
    }

    return 0;
}