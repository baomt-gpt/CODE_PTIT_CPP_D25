#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                while(n % i == 0){
                    v.push_back(i);
                    n /= i;
                }
            }
            if(n == 1) break;
        }
        if(n > 1){
            v.push_back(n);
        }
        if(v.size() == 3 && v[0] != v[1] && v[1] != v[2] && v[0] != v[2]){
            cout << "1";
        }
        else cout <<"0";

        cout << endl;
    }

    return 0;
}