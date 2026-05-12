#include <bits/stdc++.h>
using namespace std;

typedef class NhanVien{
    private:
        string maNV, ten, gt, ns, diachi, masoThue, ngayHD;
    public:
        NhanVien(){
            maNV = ten = gt = ns = diachi = masoThue = ngayHD = "";
        }
        friend ostream& operator << (ostream&, NhanVien);
        friend istream& operator >> (istream&, NhanVien&);
} nv;

ostream& operator << (ostream& out, NhanVien a){
    out << a.maNV << " "
        << a.ten << " "
        << a.gt << " "
        << a.ns << " "
        << a.diachi << " "
        << a.masoThue << " "
        << a.ngayHD;
    return out;
}

istream& operator >> (istream& in, NhanVien &a){
    a.maNV = "00001";
    getline(in, a.ten);
    in >> a.gt >> a.ns;
    in.ignore();
    getline(in, a.diachi);
    in >> a.masoThue >> a.ngayHD;
    in.ignore();
    if(a.ns[2] != '/') a.ns = "0" + a.ns;
    if(a.ns[5] != '/') a.ns.insert(3, "0");
    if(a.ngayHD[2] != '/') a.ngayHD = "0" + a.ngayHD;
    if(a.ngayHD[5] != '/') a.ngayHD.insert(3, "0");
    return in;
}

int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}