#include <iostream>

using namespace std;

int ThuanNghich(long long n){
    long long m = 0, tmp = n;
    while(tmp){
        m = m * 10 + tmp % 10;
        tmp /= 10;
    }
    return m == n;
}



int main(){
    int q;
    cin >> q;
    while(q--){
        long long n;
        cin >> n;
        if(ThuanNghich(n)) cout << "YES";
        else cout << "NO";

        cout << endl;
    }

    return 0;
}