#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
    string maNV, name, gender, date, maThue, ngayKiHD, diachi;
};

void nhap(NhanVien &x){
    getline(cin, x.name);
    getline(cin, x.gender);
    getline(cin, x.date);
    getline(cin, x.diachi);
    getline(cin, x.maThue);
    getline(cin, x.ngayKiHD);
    x.maNV = "00001";
    if(x.date[1] == '/'){
        x.date = '0' + x.date;
    }
    if(x.date[4] == '/'){
        x.date.insert(3, "0");
    }
    if(x.ngayKiHD[1] == '/'){
        x.ngayKiHD = '0' + x.ngayKiHD;
    }
    if(x.ngayKiHD[4] == '/'){
        x.ngayKiHD.insert(3, "0");
    }
}

void in(NhanVien x){
    cout << x.maNV << " " << x.name << " " << x.gender << " " << x.date << " " << x.diachi << " " << x.maThue << " " << x.ngayKiHD;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}