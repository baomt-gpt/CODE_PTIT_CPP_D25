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
        int d = -1;
        for(int i = 0; i + 1 < n; i++){
            for(int j = i + 1; j < n; j++){
                if(a[j] <= a[i]){
                    continue;
                }
                d = max(d, a[j] - a[i]);
            }
        }
        cout << d;
        cout << endl;
    }

    return 0;
}