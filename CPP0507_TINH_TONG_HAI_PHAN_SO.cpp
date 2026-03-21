#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    long long tu, mau;
};

void nhap(PhanSo &x){
    cin >> x.tu >> x.mau;
}

void rutgon(PhanSo &x){
    long long l = __gcd(x.tu, x.mau);
    x.tu /= l;
    x.mau /= l;
}

PhanSo tong(PhanSo a, PhanSo b){
    long long mc = (a.mau * b.mau) / __gcd(a.mau, b.mau);
    a.tu = mc / a.mau * a.tu;
    b.tu = mc / b.mau * b.tu;
    a.tu += b.tu;
    a.mau = mc;
    rutgon(a);
    return a;
}

void in(PhanSo x){
    cout << x.tu << "/" << x.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}