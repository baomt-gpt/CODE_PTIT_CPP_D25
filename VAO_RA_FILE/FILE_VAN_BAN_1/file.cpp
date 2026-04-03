#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("PTIT.in");
    ofstream fout("PTIT.out");
    if(!fin.is_open()) return 1;
    int q; fin >> q;
    while(q--){
        string s; fin >> s;
        if(s[s.length() - 1] % 2 == 0){
            fout << "YES" << "\n";
        }
        else fout << "NO" << "\n"; 

    }
    fin.close();

    return 0;
}