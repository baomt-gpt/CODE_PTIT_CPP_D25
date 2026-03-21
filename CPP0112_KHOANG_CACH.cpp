#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        double x = x2 - x1;
        double y = y2 - y1;
        double distant = sqrt(x * x + y * y);
        cout << fixed << setprecision(4) << distant;
        cout << endl;
    }

    return 0;
}