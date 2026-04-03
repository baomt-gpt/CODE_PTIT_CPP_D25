#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fs("PTIT.in");
    if (!fs.is_open()) {
        return 1;
    }
    ofstream fs1("PTIT.out");
    if (!fs1.is_open()) {
        return 1;
    }
    string s;
    while(getline(fs, s)){
        fs1 << s << "\n";
    }
    fs.close();
    fs1.close();

    return 0;
}