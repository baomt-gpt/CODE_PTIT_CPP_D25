#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;

        int cnt[26] = {0};

        for(char c : s){
            c = tolower(c);
            cnt[c - 'a']++;
        }

        int mx = *max_element(cnt, cnt + 26);

        for(int f = mx; f >= 1; f--){
            for(int i = 0; i < 26; i++){
                if(cnt[i] == f){
                    for(int j = 0; j < f; j++){
                        cout << char(i + 'a');
                    }
                }
            }
        }
        cout << endl;
    }
}