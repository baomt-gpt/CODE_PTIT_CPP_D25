#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream input("DATA.in");
    int n, m;
    input >> n >> m;
    int a[n], b[m];
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        input >> a[i];
        mp[a[i]]++;
    }
    for(int i = 0; i < m; i++){
        input >> b[i];
        mp[b[i]]++;
    }
    for(auto it : mp){
        if(it.second > 1) cout << it.first << " ";
    }

    input.close();
    return 0;
}