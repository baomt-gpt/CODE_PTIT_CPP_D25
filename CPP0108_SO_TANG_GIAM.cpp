#include <bits/stdc++.h>

using namespace std;

int nguyento(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

bool TangDan(int n) {
    int d = 10;
    while (n > 0) {
        if (d <= n % 10)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}

bool GiamDan(int n) {
    int d = -1;
    while (n > 0) {
        if (d >= n % 10)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int l = pow(10, n - 1);
        int r = pow(10, n) - 1;
        int d = 0;
        for (int i = l; i <= r; ++i) {
            if (TangDan(i) || GiamDan(i)) {
                if (nguyento(i))
                    d++;
        }
    }
        cout << d;

        cout << endl;
    }

    return 0;
}