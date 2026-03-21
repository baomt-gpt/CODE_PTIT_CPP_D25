#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien{
    string MaSV, TenSv, Lop, email;
} sv;

bool cmp(SinhVien a, SinhVien b){
    if(a.Lop != b.Lop) return a.Lop > b.Lop;
    return a.MaSV > b.MaSV;
}

int main(){
    int n; cin >> n;
    cin.ignore();
    vector<SinhVien> a(n);
    for(int i = 0; i < n; i++){
        getline(cin, a[i].MaSV);
        getline(cin, a[i].TenSv);
        getline(cin, a[i].Lop);
        getline(cin, a[i].email);
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << 
    }
  
  return 0;
}