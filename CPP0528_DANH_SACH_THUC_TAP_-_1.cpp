#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien{
    int stt;
    string maSV, ten, lop, email, TenDN;
} sv;

bool cmp(sv a, sv b){
    return a.ten < b.ten;
}

void nhap(sv a[], int n){
    for(int i = 0; i < n; i++){
        a[i].stt = i + 1;
        getline(cin, a[i].maSV);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
        getline(cin, a[i].TenDN);
    }
}

void inSV(sv x){
    cout << x.stt << " "
         << x.maSV << " "
         << x.ten << " "
         << x.lop << " "
         << x.email << " "
         << x.TenDN << "\n";
}

void loc(sv a[], int n){
    int q; cin >> q;
    while(q--){
        string s; cin >> s;
        vector<sv> v;
        for(int i = 0; i < n; i++){
            if(a[i].TenDN == s){
                v.push_back(a[i]);
            }
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++){
            inSV(v[i]);
        }
    }
}

int main(){
    sv ds[50];
    int n; cin >> n;
    cin.ignore();
    nhap(ds, n);
    loc(ds, n);
    return 0;
}