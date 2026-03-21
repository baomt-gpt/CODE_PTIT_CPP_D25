#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    int q;
    cin >> q;
    string d101 = "ABBADCCABDCCABD";
    string d102 = "ACCABCDDBBCDDBB";
    while(q--){
        int maDe;
        cin >> maDe;
        char x;
        int dung = 0;
        for(int i = 0; i < 15; i++){
            cin >> x;
            if(maDe == 101){
                if(x == d101[i]) dung++;
            } else {
                if(x == d102[i]) dung++;
            }
        }

        double diem = dung * 10.0 / 15;
        cout << fixed << setprecision(2) << diem << endl;
    }

    return 0;
}
