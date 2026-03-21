#include <bits/stdc++.h>
using namespace std;

string HieuSoNguyenLon(string a, string b){
    string res = "";
    while(a.size() < b.size()) a = "0" + a;
    while(a.size() > b.size()) b = "0" + b;
    int nho = 0;
    int cuoi = a.length() - 1;
    for(int i = cuoi; i >= 0; i--){
        int so = (a[i] - '0') - (b[i] - '0') - nho;
        if(so < 0){
            res = char(so + 10 + '0') + res;
            nho = 1;
        }
        else{
            res = char(so + '0') + res;
            nho = 0;
        }
    }
    return res;
}


int main(){
    int q; cin >> q;
    while(q--){
        string a, b; cin >> a >> b;
        if(a.size() < b.size() || (a.size() == b.size() && a < b)){
            swap(a, b);
        }
        cout << HieuSoNguyenLon(a, b) << endl;
    }

    return 0;
}