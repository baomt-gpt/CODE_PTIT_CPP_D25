#include <iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        long long fibo[101];
        fibo[1] = 1;
        fibo[2] = 1;
        for(long long i = 3; i < 95; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
        for(int i = a; i <= b; i++){
            cout << fibo[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}