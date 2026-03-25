#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien{
    string maSV, ten, lop;
    float d1, d2, d3;
} sv;

bool cmp(sv a, sv b){
    return a.maSV < b.maSV;
}

void nhap(sv &x){
    cin.ignore();
    getline(cin, x.maSV);
    getline(cin, x.ten);
    getline(cin, x.lop);
    cin >> x.d1 >> x.d2 >> x.d3;
}

void sap_xep(sv a[], int n){
    sort(a, a + n, cmp);
}

void in_ds(sv a[], int n){
    for(int i = 0; i < n; i++){
        cout << i + 1 << " "
             << a[i].maSV << " "
             << a[i].ten << " "
             << a[i].lop << " "
             << fixed << setprecision(1) << a[i].d1 << " "
             << fixed << setprecision(1) << a[i].d2 << " "
             << fixed << setprecision(1) << a[i].d3 << "\n";
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}