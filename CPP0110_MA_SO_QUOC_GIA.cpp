#include <iostream>
#include <string>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        string a;
        cin >> a;
        int pos = a.find("084");
        a.erase(pos, 3);
        cout << a;

        cout << endl;
    }

    return 0;
}