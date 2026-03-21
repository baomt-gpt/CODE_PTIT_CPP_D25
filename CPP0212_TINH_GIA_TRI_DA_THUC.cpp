#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int main(){
    int q;
    cin >> q;
    while(q--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long sum = 0;
        for(int i = 0; i < n; i++){
            sum = (sum * x + a[i]) % MOD;
        }
        cout << sum;

        cout << endl;
    }

    return 0;
}