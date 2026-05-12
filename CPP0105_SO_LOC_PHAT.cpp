#include <iostream>

using namespace std;

int LocPhat(string a){
    for(int i = 0; i < a.length(); i++){
        if(a[i] != '0' && a[i] != '6' && a[i] != '8') return 0;
    }
    return 1;
}

int main(){
    int q;
    cin >> q;
    cin.ignore(1);
    while(q--){
        string c;
        cin >> c;
        if(LocPhat(c)) cout << "YES";
        else cout << "NO";

        cout << endl;
    }

    return 0;
}
