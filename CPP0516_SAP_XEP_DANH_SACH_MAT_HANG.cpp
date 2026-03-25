#include <bits/stdc++.h>
using namespace std;

typedef struct HangHoa{
    string ten, nhom;
    int ma;
    float mua, ban, loinhuan;
} hh;

bool cmp(hh a, hh b){
    return a.loinhuan > b.loinhuan;
}

void nhap(hh a[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].nhom);
        cin >> a[i].mua >> a[i].ban;
        a[i].ma = i + 1;
        a[i].loinhuan = a[i].ban - a[i].mua;
    }
}

void xep(hh a[], int n){
    sort(a, a + n, cmp);
}

void in(hh a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i].ma << " "
             << a[i].ten << " "
             << a[i].nhom << " "
             << fixed << setprecision(2) << a[i].loinhuan << endl;
    }
}

int main(){
    hh a[50];
    int n; cin >> n;
    nhap(a, n);
    xep(a, n);
    in(a, n);

    return 0;
}