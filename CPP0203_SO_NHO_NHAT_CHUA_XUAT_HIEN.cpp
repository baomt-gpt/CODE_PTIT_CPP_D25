#include <bits/stdc++.h>
using namespace std;

void TestCase(){
    int n;
    cin >> n;
    vector<bool> a(n + 1, 0);
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(x >= 1 && x <= n){
            a[x] = 1;
        }
    }
    for(int i = 1; i <= n; i++){
        if(!a[i]){
            cout << i << endl;
            return;
        }
    }
    cout << n + 1 << endl;
}


int main(){
    int q;
    cin >> q;
    while(q--){
        TestCase();
    }

    return 0;
}