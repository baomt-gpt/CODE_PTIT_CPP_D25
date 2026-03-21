#include <iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        long long n;
        cin >> n;
        long long sum = n * (n + 1) / 2;
        cout << sum;
        cout << endl;
    }

    return 0;
}