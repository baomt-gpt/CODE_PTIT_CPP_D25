#include <bits/stdc++.h>

using namespace std;

int spf[10001];

void SangUoc(){
    for(int i = 1; i <= 10000; i++){
        spf[i] = i;
    }
    spf[1] = 1;
    for(int i = 2; i <= sqrt(10000); i++){
        if(spf[i] == i){
            for(int j = i * i; j <= 10000; j += i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
}

int main(){
    SangUoc();
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            cout << spf[i];
            if(i < n) cout << " ";
        }

        cout << endl;
    }

    return 0;
}