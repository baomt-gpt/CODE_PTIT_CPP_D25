#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    while(q--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        multiset<int> ms;
        for(int i = 0; i < k; i++){
            ms.insert(a[i]);
        }
        for(int i = k; i < n; i++){
            cout << *ms.rbegin() << " ";
            ms.erase(ms.find(a[i - k]));
            ms.insert(a[i]);
        }
        cout << *ms.rbegin();

        cout << endl;
    }

    return 0;
}