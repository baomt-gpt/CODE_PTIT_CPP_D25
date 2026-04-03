#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("PTIT.in");
    ofstream fout("PTIT.out");
    if(!fin.is_open()) return 1;
    int q; fin >> q;
    while(q--){
        char a; fin >> a;
        if(isdigit(a)) fout << "so" << "\n";
        else fout << "chu" << "\n";
    }


    fin.close();
    return 0;
}