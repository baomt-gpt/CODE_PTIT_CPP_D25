#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        int cnt = 0;
        for(int i = 1; i <= sqrt(n); i++){
            if(n % i == 0){
                int a = i;
                int b = n / i;
                if(a % 2 == 0) cnt++;
                if(a != b && b % 2 == 0){
                    cnt++;
                }
            }
        }
        cout << cnt;
        cout << endl;
    }

    return 0;
}