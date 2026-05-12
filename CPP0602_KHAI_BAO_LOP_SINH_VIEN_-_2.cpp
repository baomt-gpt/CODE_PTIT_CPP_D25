#include <bits/stdc++.h>
using namespace std;

typedef class SinhVien{
    private:
        string maSV, ten, lop, ns;
        float gpa;
    public:
        SinhVien(){
            maSV = ten = lop = ns = "";
            gpa = 0;
        }
        friend ostream& operator << (ostream&, SinhVien);
        friend istream& operator >> (istream&, SinhVien&);
} sv;

ostream& operator << (ostream& out, SinhVien a){
    out << a.maSV << " "
        << a.ten << " "
        << a.lop << " "
        << a.ns << " "
        << fixed << setprecision(2) << a.gpa;
    return out;
}

istream& operator >> (istream& in, SinhVien &a){
    a.maSV = "B20DCCN001";
    getline(in, a.ten);
    in >> a.lop >> a.ns >> a.gpa;
    if(a.ns[2] != '/') a.ns = "0" + a.ns;
    if(a.ns[5] != '/') a.ns.insert(3, "0");
    return in;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}