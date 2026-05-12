#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    cin.ignore();

    ofstream fileA("A.txt");
    for(int i = 0; i < n; i++){
        string ten;
        getline(cin, ten);
        fileA << ten << "\n";
    }
    fileA.close();
    ifstream inputA("A.txt");
    ofstream outputB("B.txt");
    string str;
    while(getline(inputA, str)){
        outputB << str << "\n";
    }
    inputA.close();
    outputB.close();

    return 0;
}