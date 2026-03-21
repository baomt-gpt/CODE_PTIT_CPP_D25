#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien{
    string maSV, ten, lop, ngaysinh;
    float gpa;
} sv;

void nhapThongTinSV(sv &x){
    x.maSV = "N20DCCN001";

    getline(cin, x.ten);
    getline(cin, x.lop);
    getline(cin, x.ngaysinh);
    cin >> x.gpa;

    if(x.ngaysinh[1] == '/') x.ngaysinh = "0" + x.ngaysinh;
    if(x.ngaysinh[4] == '/') x.ngaysinh.insert(3, "0");
}

void inThongTinSV(sv x){
    cout << x.maSV << "\t" << x.ten << "\t" 
         << x.lop << "\t" << x.ngaysinh << "\t" 
         << fixed << setprecision(2) << x.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}