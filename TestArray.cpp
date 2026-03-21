#include <bits/stdc++.h>

using namespace std;

// void SelectionSort(int a[], int n){
//     for(int i = 0; i < n; i++){
//         int min_pos = i;
//         for(int j = i + 1; j < n; j++){
//             if(a[j] < a[min_pos]){
//                 min_pos = j;
//             }
//         }
//         swap(a[min_pos], a[i]);
//     }
// }

// void BubbleSort(int a[], int n){
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n - i - 1; j++){
//             if(a[j] > a[j + 1]){
//                 swap(a[j], a[j + 1]);
//             }
//         }
//     }
// }

// void InterchangeSort(int a[], int n){
//     for(int i = 0; i < n - 1; i++){
//         for(int j = i + 1; j < n; j++){
//             if(a[i] > a[j]){
//                 swap(a[i], a[j]);
//             }
//         }
//     }
// }

// sort(a, a + n); --> tăng dần
// sort(a, a + n, greater<int>()); --> giảm dần

// bool cmp(int a, int b){
//     if(a < b) return true;  + sort(a, a + n, cmp) --> tăng dần
//     else return  false;
// }

// bool cmp(int a, int b){
//     if(a > b) return true;  + sort(a, a + n, cmp) --> giảm dần
//     else return  false;
// }

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}