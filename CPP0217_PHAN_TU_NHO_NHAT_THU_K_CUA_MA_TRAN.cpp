#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    while(q--){
        int n, k; cin >> n >> k;
        int a[n][n];
        vector<int> v;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
                v.push_back(a[i][j]);
            }
            cout << endl;
        }
        sort(v.begin(), v.end());
        cout << v[k - 1] << endl;
    }

    return 0;
}