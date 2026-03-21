#include <bits/stdc++.h>

using namespace std;

int main(){
    long long fibo[101];
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i < 94; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        cout << fibo[n];

        cout << endl;
    }

    return 0;
}