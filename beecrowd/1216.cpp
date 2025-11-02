#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int d;
    double res = 0;
    int cont = 0;
    while (getline(cin, s)) {
        cin >> d;
        cin.ignore();
        res += d;
        cont++;
    }
    
    printf("%.1lf\n", res/cont);
}