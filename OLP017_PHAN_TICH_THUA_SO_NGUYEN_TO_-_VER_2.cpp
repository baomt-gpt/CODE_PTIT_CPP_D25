#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int prime[10000001];
vector<int> primes;

void sieve(){
    for(int i = 0; i <= 10000000; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(10000000); i++){
        if(prime[i]){
            for(int j = i * i; j <= 10000000; j += i){
                prime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= 10000000; i++){
        if(prime[i]) primes.push_back(i);
    }
}

int main(){
    sieve();
    int q;
    cin >> q;
    while(q--){
        ll n;
        cin >> n;
        vector<pair<long long, int>> v;
        for(int i = 0; i < primes.size(); i++){
            ll p = primes[i];
            if(p * p > n) break;
            if(n % p == 0){
                int cnt = 0;
                while(n % p == 0){
                    cnt++;
                    n /= p;
                }
                v.push_back({p, cnt});
            }
        }
        if(n > 1) v.push_back({n, 1});
        for(int i = 0; i < v.size(); i++){
            cout << v[i].first << " " << v[i].second << endl;
        }

        cout << endl;
    }

    return 0;
}