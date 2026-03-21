#include <bits/stdc++.h>
using namespace std;

struct PhanSo{
    long long tu, mau;
} ps;

int main(){
    struct PhanSo ps1;
    cin >> ps1.tu >> ps1.mau;
    long long n = __gcd(ps1.tu, ps1.mau);
    cout << ps1.tu / n << "/" << ps1.mau / n;

    return 0;
}