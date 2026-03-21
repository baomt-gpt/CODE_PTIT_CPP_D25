#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i = 2; i <= sqrt(n); i++){
            int mu = 0;
            while(n % i == 0){
                mu++;
                n /= i;
            }
            if(mu != 0){
                cout << i << " " << mu << " ";
            }
        }
        if(n > 1) cout << n << " " << "1";

        cout << endl;
    }

    return 0;
}