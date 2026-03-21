#include <iostream>

using namespace std;

long long tongChuSo(long long n){
    long long sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}



int main(){
    int q;
    cin >> q;
    while(q--){
        long long n;
        cin >> n;
        while(n > 9){
            n = tongChuSo(n);
        }
        cout << n;

        cout << endl;
    }

    return 0;
}