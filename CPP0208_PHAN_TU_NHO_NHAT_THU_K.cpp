#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << v[k - 1];

        cout << endl;
    }

    return 0;
}