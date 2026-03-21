#include <iostream>

using namespace std;

long long gt(long long n){
    long long sum = 1;
    for(long long i = 1; i <= n; i++){
        sum *= i;
    }
    return sum;
}



int main(){
    int n;
    cin >> n;
    long long giai_thua = 0;
    for(long long i = 1; i <= n; i++){
        giai_thua += gt(i);
    }
    cout << giai_thua;
    return 0;
}