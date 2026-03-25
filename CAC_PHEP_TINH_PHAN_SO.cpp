#include <bits/stdc++.h>
using namespace std;

typedef struct PhanSo{
    long long tu, mau;
} ps;

void nhap(ps &x){
    cin >> x.tu >> x.mau;
}

void rutgon(ps &x){
    long long l = __gcd(x.tu, x.mau);
    x.tu /= l;
    x.mau /= l;
    
    if(x.mau < 0){   // chuẩn hóa dấu
        x.tu *= -1;
        x.mau *= -1;
    }
}

ps tong(ps a, ps b){
    long long mc = (a.mau * b.mau) / __gcd(a.mau, b.mau);
    a.tu = mc / a.mau * a.tu;
    b.tu = mc / b.mau * b.tu;
    a.tu += b.tu;
    a.mau = mc;
    rutgon(a);
    return a;
}

PhanSo hieu(ps a, ps b){
    long long mc = (a.mau * b.mau) / __gcd(a.mau, b.mau);
    a.tu = mc / a.mau * a.tu;
    b.tu = mc / b.mau * b.tu;
    a.tu -= b.tu;
    a.mau = mc;
    rutgon(a);
    return a;
}

PhanSo tich(ps a, ps b){
    PhanSo res;
    res.tu = a.tu * b.tu;
    res.mau = a.mau * b.mau;
    rutgon(res);
    return res;
}

PhanSo thuong(ps a, ps b){
    PhanSo res;
    res.tu = a.tu * b.mau;
    res.mau = a.mau * b.tu;
    rutgon(res);
    return res;
}

void in(ps x){
    cout << x.tu << "/" << x.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}