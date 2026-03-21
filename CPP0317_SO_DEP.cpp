#include <bits/stdc++.h>
using namespace std;

int SoDep(string a){
    int n = a.length();
    for(int i = 0; i < n; i++){
        if(a[i] != a[n - i - 1]) return 0;
        if(a[i] != '0' && a[i] != '2' && a[i] != '4' && a[i] != '6' && a[i] != '8') return 0;
    }
    return 1;
}

int main(){
    int q;
    cin >> q;
    cin.ignore();
    while(q--){
        string s;
        cin >> s;
        if(SoDep(s)) cout << "YES";
        else cout << "NO";

        cout << endl;
    }

    return 0;
}