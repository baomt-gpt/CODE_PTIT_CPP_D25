#include <bits/stdc++.h>
using namespace std;

int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s;
        cin >> s;
        multiset<char> ms;
        int sum = 0;
        for(char x : s){
            if(isdigit(x)){
                sum += x - '0';
            }
            else ms.insert(x);
        }
        for(char x : ms){
            cout << x;
        }
        cout << sum;
        cout << endl;
    }

    return 0;
}