#include <bits/stdc++.h>

using namespace std;

int prime[1000001];

void seive(){
    for(int i = 0; i <= 1000000; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(1000000); i++){
        if(prime[i]){
            for(int j = i * i; j <= 1000000; j += i){
                prime[j] = 0;
            }
        }
    }
}

int main(){
    seive();
    int q;
    cin >> q;
    while(q--){
        long long n;
        cin >> n;
        int cnt = 0;
        for(long long i = 2; i <= sqrt(n); i++){
            if(prime[i]){
                cnt++;
            }
        }
        cout << cnt;
        cout << endl;
    }

    return 0;
}