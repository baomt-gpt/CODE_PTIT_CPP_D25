#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
    string maSV, name, lop, date;
    float gpa;
};

void nhap(SinhVien &x){
    getline(cin, x.name);
    getline(cin, x.lop);
    getline(cin, x.date);
    cin >> x.gpa;
    x.maSV = "B20DCCN001";
    if(x.date[1] == '/'){
        x.date = '0' + x.date;
    }
    if(x.date[4] == '/'){
        x.date.insert(3, "0");
    }
}

void in(SinhVien x){
    cout << x.maSV << " " << x.name << " " << x.lop << " " << x.date << " " << fixed << setprecision(2) << x.gpa; 
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}