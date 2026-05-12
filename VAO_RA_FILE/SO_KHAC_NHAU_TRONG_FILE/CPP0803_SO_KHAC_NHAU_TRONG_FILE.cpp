#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream input("DATA.in");
    if(!input.is_open()) return 1;
    int n;
    map<int, int> mp;
    while(input >> n){
        mp[n]++;
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << "\n";
    }
    input.close();
    return 0;
}