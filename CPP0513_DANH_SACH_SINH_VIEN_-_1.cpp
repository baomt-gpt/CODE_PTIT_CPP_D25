#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien{
    string name, lop, date, maSV;
    float gpa;
} sv;

string ma(int i){
    string r = to_string(i);
    while(r.length() < 3){
        r = '0' + r;
    }
    return "B20DCCN" + r;
}


void nhap(sv a[], int n){
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, a[i].name);
        getline(cin, a[i].lop);
        getline(cin, a[i].date);
        cin >> a[i].gpa;
        cin.ignore();
        if(a[i].date[1] == '/') a[i].date = "0" + a[i].date;
        if(a[i].date[4] == '/') a[i].date.insert(3, "0");
        a[i].maSV = ma(i + 1);
    }
}

void in(sv a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i].maSV << " " << a[i].name << " " << a[i].lop << " " << a[i].date << " " << fixed << setprecision(2) << a[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}