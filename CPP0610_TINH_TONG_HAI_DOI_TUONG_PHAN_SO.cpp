#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

typedef class PhanSo{
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau);
        friend ostream& operator << (ostream&, PhanSo);
        friend istream& operator >> (istream&, PhanSo&);
        friend PhanSo operator + (PhanSo, PhanSo);
} ps;

PhanSo::PhanSo(ll tu, ll mau){
    this->tu = tu;
    this->mau = mau;
}

ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}

ostream& operator << (ostream& out, PhanSo a){
    out << a.tu << "/" << a.mau << "\n";
    return out; 
}

istream& operator >> (istream& in, PhanSo &a){
    in >> a.tu >> a.mau;
    return in;
}

PhanSo operator + (PhanSo a, PhanSo b){
    PhanSo tong(1, 1);
    ll mc = lcm(a.mau, b.mau);
    tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
    tong.mau = mc;
    ll g = __gcd(tong.tu, tong.mau);
    tong.tu /= g; tong.mau /= g;
    return tong;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}