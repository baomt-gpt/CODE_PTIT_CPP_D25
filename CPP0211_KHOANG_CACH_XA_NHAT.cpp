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
        int d = 0;
        for(int i = 0; i <= sqrt(n); i++){
            for(int j = i + 1; j < n; j++){
                if(a[i] > a[j]) continue;
                d = max(d, j - i);
            }   
        }
        cout << d;
        cout << endl;
    }

    return 0;
}