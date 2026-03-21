#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        int cnt[26] = {0};
        for(int i = 0; i < s.length(); i++){
            cnt[s[i] - 'A']++;
        }
        for(int i = 0; i < s.length(); i++){
            if(cnt[s[i] - 'A'] == 1) cout << s[i];
        }

        cout << endl;
    }

    return 0;
}