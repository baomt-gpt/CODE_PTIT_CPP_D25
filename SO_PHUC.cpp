#include <bits/stdc++.h>
using namespace std;

struct SoPhuc{
    long long thuc;
    long long ao;
};

void nhap(SoPhuc &x){
    cin >> x.thuc >> x.ao;
}

SoPhuc tong(SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc + b.thuc;
    res.ao = a.ao + b.ao;
    return res;
}

SoPhuc hieu(SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc - b.thuc;
    res.ao = a.ao - b.ao;
    return res;
}

SoPhuc tich(SoPhuc a, SoPhuc b){
    SoPhuc res;
    res.thuc = a.thuc * b.thuc - a.ao * b.ao;
    res.ao = a.thuc * b.ao + a.ao * b.thuc;
    return res;
}

struct SoPhucThuc{
    double thuc;
    double ao;
};

SoPhucThuc thuong(SoPhuc a, SoPhuc b){
    SoPhucThuc res;
    double mau = 1.0 * b.thuc * b.thuc + 1.0 * b.ao * b.ao;
    res.thuc = (1.0 * a.thuc * b.thuc + 1.0 * a.ao * b.ao) / mau;
    res.ao = (1.0 * a.ao * b.thuc - 1.0 * a.thuc * b.ao) / mau;
    return res;
}

void in(SoPhuc x){
    cout << x.thuc << " " << x.ao;
}

void inThuong(SoPhucThuc x){
    cout << fixed << setprecision(2) << x.thuc << " " << x.ao;
}

int main(){
    SoPhuc p, q;
    nhap(p);
    nhap(q);
    SoPhuc t = tong(p, q);
    in(t);
    return 0;
}