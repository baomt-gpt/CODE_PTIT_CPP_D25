#include <iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        int n = s.length();
        if(s[n - 1] == '6' && s[n - 2] == '8') cout << "1";
        else cout << "0";

        cout << endl;
    }

    return 0;
}