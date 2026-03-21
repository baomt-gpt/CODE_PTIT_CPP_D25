#include <bits/stdc++.h>
using namespace std;

bool isEndl(string s) 
{
    char c = s.back();
    return (c == '.' || c == '?' || c == '!');
}

int main()
{
    vector<string> v;
    string s;
    while (cin >> s) {
        v.push_back(s);
    }

    bool caps = 1;
    for (int i = 0; i < v.size(); i++) {
        string &x = v[i];
        for(int j = 0; j < x.size(); i++){
            x[j] = tolower(x[j]);
        }
        if (caps) {
            x[0] = toupper(x[0]);
            caps = 0;
        }
        
        if (isEndl(x)) {
            x.pop_back();
            cout << x << endl;
            caps = 1;
        }
        else
            cout << x << " ";
    }
    return 0;
}