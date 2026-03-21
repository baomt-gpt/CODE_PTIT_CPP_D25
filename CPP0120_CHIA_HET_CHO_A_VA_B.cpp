#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        int cnt = 0;
        for(int i = m; i <= n; i++){
            if(i % a == 0 || i % b == 0){
                cnt++;
            }
        }
        cout << cnt;

        cout << endl;
    }

    return 0;
}