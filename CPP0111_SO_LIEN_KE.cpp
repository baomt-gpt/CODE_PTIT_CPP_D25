#include <iostream>

using namespace std;

int SoLienKe(string a){
    for(int i = 0; i < a.length() - 1; i++){
        if(abs((a[i] - '0') - (a[i + 1] - '0')) != 1) return 0;
    }
    return 1;
}


int main(){
    int q;
    cin >> q;
    while(q--){
        string c;
        cin >> c;
        if(SoLienKe(c)) cout << "YES";
        else cout << "NO";

        cout << endl;
    }

    return 0;
}