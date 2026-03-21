#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int d = 1e9;
        for(int i = 0; i < n; i++){
            d = min(d, abs(a[i + 1] - a[i]));
        }
        cout << d;

        cout << endl;
    }

    return 0;
}