#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
        }
        cout << endl;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int dem1 = 0;
        for(int j = 0; j < 3; j++){
            if(a[i][j] == 1) dem1++;
        }
        if(dem1 > 1) cnt++;
    }
    cout << cnt;

    return 0;
}