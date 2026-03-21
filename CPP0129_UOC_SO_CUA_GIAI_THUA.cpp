#include <bits/stdc++.h>

using namespace std;

int countPower(int n, int p){
    int count = 0;
    while(n >= p){
        count += n / p;
        n /= p;
    }
    return count;
}


int main(){
    int q;
    cin >> q;
    while(q--){
        int n, p;
        cin >> n >> p;
        cout << countPower(n, p);

        cout << endl;
    }

    return 0;
}