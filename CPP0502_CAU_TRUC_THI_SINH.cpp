#include <bits/stdc++.h>
using namespace std;

typedef struct ThiSinh{
    string ten, dob;
    float d1, d2, d3, sum;
} ts;

void nhap(ts &x){
    getline(cin, x.ten);
    getline(cin, x.dob);
    cin >> x.d1 >> x.d2 >> x.d3;
    x.sum = x.d1 + x.d2 + x.d3;
}

void in(ts x){
    cout << x.ten << " "
         << x.dob << " "
         << fixed << setprecision(1) << x.sum;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}