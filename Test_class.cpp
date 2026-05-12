#include <bits/stdc++.h>
using namespace std;
// >> <<
//cout : ostream
//cin : istream

typedef class SinhVien{
    private:
        string id, ten, ns;
        double gpa;
        static int dem;
    public:
        SinhVien(); //constructor
        // SinhVien (string, string, string, double); //constructor
        // void nhap();
        // void in();
        // friend void inthongtin(SinhVien);
        // friend void ChuanHoa(SinhVien&);
        friend istream& operator >> (istream &in, SinhVien &a);
        friend ostream& operator << (ostream &out, SinhVien a);
} sv;

istream& operator >> (istream &in, sv &a){
    in >> a.id; in.ignore();
    getline(in, a.ten);
    in >> a.ns >> a.gpa;
    return in;
}

ostream& operator << (ostream &out, sv a){
    cout << a.id << " " << a.ten << " " a.ns << " " << fixed << setprecision(2) << a.gpa << endl; 
}

void ChuanHoa(sv &a){
    string res = "";
    stringstream ss(a.ten);
    string token;
    while(ss >> token){
        res += toupper(token[0]);
        for(int i = 1; i < token.length(); i++){
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    a.ten = res;
}

void inthongtin(sv a){
    cout << a.id << " " << a.ten << endl;
}

int sv::dem = 0;

// void sv::tangDem(){
//     ++dem;
// }

// int sv::getDem(){
//     return dem;
// }

sv::SinhVien(){
    this->id = this->ten = this->ns = "";
    this->gpa = 0;
}

sv::SinhVien(string id, string ten, string ns, double gpa){
    // cout << "Ham khoi tao co tham so duoc goi !\n";
    this->id = id;
    this->ten = ten;
    this->ns = ns;
    this->gpa = gpa;
}

// sv::~SinhVien(){
//     // cout << "Doi tuong dc huy tai day !\n";
// }

void sv::nhap(){
    ++dem; //dem = 1;
    this->id = "SV" + string(3 - to_string(dem).length(), '0') + to_string(dem);
    getline(cin, this->ten);
    cin >> this->ns;
    cin >> this->gpa;
    cin.ignore();
}

void sv::in(){
    cout << this->id << " " << this->ten << " " << this->ns << " " << fixed << setprecision(2) << this->gpa << "\n";
}

// double sv::getGpa(){
//     return this->gpa;
// }

// bool cmp(sv a, sv b){
//     return a.getGpa() > b.getGpa();
// }

int main(){
    sv x;
    x.nhap();
    ChuanHoa(x);
    x.in();
    return 0;
}