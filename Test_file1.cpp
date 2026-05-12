#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string ma, ten, lop;
    double thcs2, cpp, dtb;
};

bool cmp(SinhVien a, SinhVien b){
    return a.dtb > b.dtb;
}

int main() {
    ifstream in("PTIT.in");
    ofstream out("PTIT.out");
    int n;
    in >> n;
    in.ignore();
    SinhVien a[50];
    for(int i = 0; i < n; i++){
        getline(in, a[i].ma);
        getline(in, a[i].ten);
        getline(in, a[i].lop);
        in >> a[i].thcs2 >> a[i].cpp;
        in.ignore();
        a[i].dtb = (a[i].thcs2 + a[i].cpp) / 2;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        out << a[i].ma << '\n';
        out << a[i].ten << '\n';
        out << a[i].lop << '\n';
        out << fixed << setprecision(2) << a[i].dtb << '\n';
    }
    in.close();
    out.close();

    return 0;
}