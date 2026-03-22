#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien{
    string ten, lop, date, maSV;
    float gpa;
} sv;

string ChuanHoa(string s){
    string res = "";
    stringstream ss(s);
    string word;
    vector<string> v;
    while(ss >> word){
        v.push_back(word);
    }
    for(int i = 0; i < v.size(); i++){
        v[i][0] = toupper(v[i][0]);
        for(int j = 1; j < v[i].size(); j++){
            v[i][j] = tolower(v[i][j]);
        }
        res += v[i];
        if(i != v.size() - 1) res += " ";
    }
    return res;
}

void nhap(sv a[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].date >> a[i].gpa;
    }
}

void in(sv a[], int n){
    for(int i = 0; i < n; i++){
        if (a[i].date[1] == '/') a[i].date = "0" + a[i].date;
        if (a[i].date[4] == '/') a[i].date.insert(3, "0");
        string s = to_string(i + 1);
        while(s.length() < 3) s = "0" + s;
        cout << "B20DCCN" << s << " ";
        cout << ChuanHoa(a[i].ten) << " " << a[i].lop << " " << a[i].date << " " << fixed << setprecision(2) << a[i].gpa << endl;
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