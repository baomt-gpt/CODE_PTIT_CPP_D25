#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n, Q;
        cin >> n >> Q;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < Q; i++){
            int l, r;
            cin >> l >> r;
            int sum = 0;
            for(int i = l - 1; i <= r - 1; i++){
                sum += a[i];
            }
            cout << sum << endl;
        }
    }

    return 0;
}