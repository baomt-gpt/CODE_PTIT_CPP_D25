#include <iostream>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        if(c >= 'a' && c <= 'z'){
            c -= 32;
            cout << c;
        }
        else {
            c += 32;
            cout << c;
        }

        cout << endl;
    }

    return 0;
}