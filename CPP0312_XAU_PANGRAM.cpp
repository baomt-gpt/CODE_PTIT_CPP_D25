#include <bits/stdc++.h>
using namespace std;

int Pangram(string s, int n){
    int cnt[26] = {0};
    for(int i = 0; i < s.length(); i++){
        cnt[s[i] - 'a']++;
    }
    int dem = 0;
    for(int i = 0; i < 26; i++){
        if(cnt[i] == 0) dem++; 
    }
    if(dem <= n) return 1;
    return 0;
}

int main(){
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        cin >> s;
        int k;
        cin >> k;
        if(Pangram(s, k)) cout << "1";
        else cout << "0";
        cout << endl;
    }

    return 0;
}