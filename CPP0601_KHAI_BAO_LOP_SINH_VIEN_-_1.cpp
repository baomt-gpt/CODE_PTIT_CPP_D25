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
        void nhap();
        void xuat();

} sv;

void sv::nhap(){
    maSV = "B20DCCN001";
    getline(cin, ten);
    cin >> lop >> ns >> gpa;
    if(ns[2] != '/') ns = "0" + ns;
    if(ns[5] != '/') ns.insert(3, "0");
    cin.ignore();

}

void sv::xuat(){
    cout << maSV << " " << ten << " " << lop << " " << ns << " " << fixed << setprecision(2) << gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}