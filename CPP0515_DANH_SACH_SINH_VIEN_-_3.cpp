#include <bits/stdc++.h>
using namespace std;

typedef struct SinhVien{
    string ten, lop, date, maSV;
    float gpa;
} sv;

bool cmp(sv a, sv b){
    return a.gpa > b.gpa;
}

string ChuanHoa(string s){
    string res = "";
    stringstream ss(s);
    string word;
    while(ss >> word){
        word[0] = toupper(word[0]);
        for(int i = 1; i < word.size(); i++){
            word[i] = tolower(word[i]);
        }
        res += word + " ";
    }
    res.pop_back();
    return res;
}

void nhap(sv a[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].date >> a[i].gpa;
        if(a[i].date[1] == '/') a[i].date = "0" + a[i].date;
        if(a[i].date[4] == '/') a[i].date.insert(3, "0"); 
        string s = to_string(i + 1);
        while(s.size() < 3) s = "0" + s;
        a[i].maSV = "B20DCCN" + s;
    }
}

void sapxep(sv a[], int n){
    sort(a, a + n, cmp);
}

void in(sv a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i].maSV << " " << ChuanHoa(a[i].ten) << " " 
        << a[i].lop << " " << a[i].date << " " << fixed << setprecision(2) << a[i].gpa << endl;
        
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}