#include <iostream>

using namespace std;

int CanBangChanLe(int n){
    int chan = 0, le = 0;
    while(n){
        if((n % 10) % 2 == 0) chan++;
        else le++;
        n /= 10;
    }
    return chan == le;
}



int main(){
    int n;
    cin >> n;
    if(n == 2){
        int cnt = 0;
        for(int i = 10; i <= 99; i++){
            if(CanBangChanLe(i)){
                cout << i << " ";
                cnt++;
            }
            if(cnt == 10){
                cout << endl;
                cnt = 0;
            }
        }
    }
    else if(n == 4){
        int cnt = 0;
        for(int i = 1000; i <= 9999; i++){
            if(CanBangChanLe(i)){
                cout << i << " ";
                cnt++;
            }
            if(cnt == 10){
                cout << endl;
                cnt = 0;
            }
        }
    }
    else{
        int cnt = 0;
        for(int i = 100000; i <= 999999; i++){
            if(CanBangChanLe(i)){
                cout << i << " ";
                cnt++;
            }
            if(cnt == 10){
                cout << endl;
                cnt = 0;
            }
        }
    }

    return 0;
}