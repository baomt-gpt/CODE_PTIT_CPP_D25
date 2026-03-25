#include <bits/stdc++.h>
using namespace std;

typedef struct ThoiGian{
    int gio, phut, giay;
} tg;

bool cmp(tg a, tg b){
    if(a.gio != b.gio) return a.gio < b.gio;
    if(a.phut != b.phut) return a.phut < b.phut;
    return a.giay < b.giay;
}

int main(){
    tg a[5001];
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i].gio >> a[i].phut >> a[i].giay;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].gio << " " << a[i].phut << " " << a[i].giay << "\n";
    }

    return 0;
}