#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;

int spf[MAX + 1];
int ban[MAX + 1];
int Prime[MAX + 1];

void sieve(){
    for(int i = 1; i <= MAX; i++){
        spf[i] = i;
    }
    spf[1] = 1;

    for(int i = 2; i * i <= MAX; i++){
        if(spf[i] == i){
            for(int j = i * i; j <= MAX; j += i){
                if(spf[j] == j) spf[j] = i;
            }
        }
    }
}

int main(){
    sieve();
    int n, m;
    cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        int x = a[i];
        while(x > 1){
            int p = spf[x];
            Prime[p] = 1;
            while(x % p == 0){
                x /= p;
            }
        }
    }

    for(int p = 2; p <= m; p++){
        if(Prime[p]){
            for(int j = p; j <= m; j += p){
                ban[j] = 1;
            }
        }
    }

    int cnt = 0;
    for(int i = 1; i <= m; i++){
        if(!ban[i]) cnt++;
    }

    cout << cnt << "\n";
    for(int i = 1; i <= m; i++){
        if(!ban[i]) cout << i << " ";
    }

    return 0;
}
