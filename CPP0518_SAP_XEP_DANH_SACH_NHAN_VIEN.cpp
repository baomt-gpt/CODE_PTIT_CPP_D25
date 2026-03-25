#include <bits/stdc++.h>
using namespace std;

int stt = 1;

typedef struct NhanVien{
    string ten, gender, dob, diachi, maThue, hd, maNV;
    int d, m, y;
} nv;

bool cmp(nv a, nv b){
    if(a.y != b.y) return a.y < b.y;
    if(a.m != b.m) return a.m < b.m;
    return a.d < b.d;
}

string STT(int i){
    string s = to_string(i);
    while(s.length() < 5) s = "0" + s;
    return s;
}

void nhap(nv &x){
    if(stt == 1) cin.ignore();
    x.maNV = STT(stt); stt++;
    getline(cin, x.ten);
    getline(cin, x.gender);
    getline(cin, x.dob);
    getline(cin, x.diachi);
    getline(cin, x.maThue);
    getline(cin, x.hd);
    x.d = stoi(x.dob.substr(3, 2));
    x.m = stoi(x.dob.substr(0, 2));
    x.y = stoi(x.dob.substr(6));
}

void sapxep(nv a[], int n){
    sort(a, a + n, cmp);
}

void inds(nv a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i].maNV << " "
             << a[i].ten << " "
             << a[i].gender << " "
             << a[i].dob << " "
             << a[i].diachi << " "
             << a[i].maThue << " "
             << a[i].hd << "\n";    
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}