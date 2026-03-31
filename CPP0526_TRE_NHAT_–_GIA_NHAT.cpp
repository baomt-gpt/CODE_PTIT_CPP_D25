#include <bits/stdc++.h>
using namespace std;

typedef struct People{
    string name, dob;
    int d, m, y;
} pp;

bool cmp(pp a, pp b){
    if(a.y != b.y) return a.y > b.y;
    if(a.m != b.m) return a.m > b.m;
    return a.d > b.d;
}

void nhap(pp a[], int n){
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].dob;
        a[i].d = stoi(a[i].dob.substr(0, 2));
        a[i].m = stoi(a[i].dob.substr(3, 2));
        a[i].y = stoi(a[i].dob.substr(6));
    }
    sort(a, a + n, cmp);
}

int main(){
    pp ds[101];
    int n; cin >> n;
    cin.ignore();
    nhap(ds, n);
    cout << ds[0].name << "\n" << ds[n - 1].name;

    return 0;
}