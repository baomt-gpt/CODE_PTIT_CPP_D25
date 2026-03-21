    #include <bits/stdc++.h>

    using namespace std;

    typedef long long ll;

    ll TinhTong(ll n){
        ll sum = 0;
        while(n){
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }

    int isPrime(ll n){
        for(ll i = 2; i <= sqrt(n); i++){
            if(n % i == 0) return 0;
        }
        return n > 1;
    }

    int main(){
        int q;
        cin >> q;
        while(q--){
            vector<ll> v;
            ll n;
            cin >> n;
            ll temp = n;
            for(ll i = 2; i <= sqrt(n); i++){
                while(n % i == 0){
                    v.push_back(i);
                    n /= i;
                }
            }
            if(n > 1) v.push_back(n);
            ll tong = 0;
            for(ll i = 0; i < v.size(); i++){
                tong += TinhTong(v[i]);
            }
            if(TinhTong(temp) == tong && !isPrime(temp)) cout << "YES";
            else cout << "NO";
            cout << endl;
        }

        return 0;
    }