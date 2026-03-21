#include <bits/stdc++.h>
using namespace std;

//Cho mảng có n phần tử và số nguyên k, đối với mỗi dãy con liên tiếp có chiều dài k
//In ra được phần tử lớn nhất trong dãy con đó
//10 3
//1 2 3 1 4 5 1 8 9 10
//Output
//3 3 4 5 5 8 9 10

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    multiset<int> ms;
    for(int i = 0; i < k; i++){
        ms.insert(a[i]);
    }
    for(int i = k; i < n; i++){
        cout << *ms.rbegin() << " ";
        ms.erase(ms.find(a[i - k]));
        ms.insert(a[i]);
    }
    cout << *ms.rbegin() << endl;

    return 0;
}