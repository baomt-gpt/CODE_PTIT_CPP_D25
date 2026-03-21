#include <bits/stdc++.h>
using namespace std;

typedef struct People{
    string name, date;
    int d, m, y;
} pp;

bool cmp(pp a, pp b) {
    if (a.y != b.y) return a.y > b.y;
    if (a.m != b.m) return a.m > b.m;
    return a.d > b.d;
}

int main(){
    pp a[101];
    int n; cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, a[i].name);
        getline(cin, a[i].date);
        a[i].d = stoi(a[i].date.substr(0, 2));
        a[i].m = stoi(a[i].date.substr(3, 2));
        a[i].y = stoi(a[i].date.substr(6));

    }
    sort(a, a + n, cmp);
    cout << a[0].name << " " << a[n - 1].name;

    return 0;
}