#include <bits/stdc++.h>
using namespace std;

int Tong(string s){
    int ans = 0;
    int sum = 0;
    for(char x : s){
        if(isdigit(x)){
            sum = sum * 10 + (x - '0');
        }
        else{
            ans += sum; sum = 0;
        }
    }
    ans += sum;
    return ans;
}


int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s;
        cin >> s;
        cout << Tong(s);

        cout << endl;
    }

    return 0;
}