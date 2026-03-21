#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;
    int ans = INT_MIN;
    int sum = 0;
    for(char x : s){
        if(isdigit(x)){
            sum = sum * 10 + (x - '0');
        }
        else{
            ans = max(ans, sum); sum = 0;
        }
    }
    ans = max(ans, sum);
    cout << ans << endl;
}


int main(){
    int q; cin >> q;
    cin.ignore();
    while(q--){
        solve();
        
    }

    return 0;
}