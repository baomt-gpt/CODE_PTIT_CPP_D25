    #include <bits/stdc++.h>
    using namespace std;

    int cnt = 0;

    class SinhVien{
        private:
            string maSV, ten, lop, ns;
            float gpa;
        public:
            SinhVien(){
                maSV = ten = lop = ns = "";
                gpa = 0;
            }
            friend ostream& operator << (ostream&, SinhVien);
            friend istream& operator >> (istream&, SinhVien&);
    };

    ostream& operator << (ostream& out, SinhVien a){
        out << a.maSV << " "
            << a.ten << " "
            << a.lop << " "
            << a.ns << " "
            << fixed << setprecision(2) << a.gpa << "\n";
        return out;
    }

    istream& operator >> (istream& in, SinhVien &a){
        ++cnt;
        a.maSV = "B20DCCN";
        string tmp = to_string(cnt);
        while(tmp.size() < 3) tmp = "0" + tmp;
        a.maSV = a.maSV + tmp;
        in.ignore();
        getline(in, a.ten);
        in >> a.lop >> a.ns >> a.gpa;
        if(a.ns[2] != '/') a.ns = "0" + a.ns;
        if(a.ns[5] != '/') a.ns.insert(3, "0");
        return in;
    }

    int main(){
        SinhVien ds[50];
        int N, i;
        cin >> N;
        for(i=0;i<N;i++){
            cin >> ds[i];
        }
        for(i=0;i<N;i++){
            cout << ds[i];
        }
        return 0;
    }