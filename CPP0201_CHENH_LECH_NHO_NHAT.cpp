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
        int r = 1e9;
        for(int i = 0; i < n - 1; i++){
            r = min(r, a[i + 1] - a[i]);
        }
        cout << r;

        cout << endl;
    }

    return 0;
}