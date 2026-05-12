#include <bits/stdc++.h>
using namespace std;

#define ll long long

typedef class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau);
        void rutgon();
        friend istream& operator >> (istream &in, PhanSo &a);
        friend ostream& operator << (ostream &out, PhanSo a);
} ps;

PhanSo::PhanSo(ll tu, ll mau){
    this->tu = tu;
    this->mau = mau;
}

void ps::rutgon(){
    ll lcm = __gcd(tu, mau);
    tu /= lcm;
    mau /= lcm;
}

istream& operator >> (istream &in, ps &a){
    in >> a.tu >> a.mau;
    return in;
}

ostream& operator << (ostream &out, ps a){
    out << a.tu << "/" << a.mau;
    return out;
}

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}