#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n; cin >> n;
 
    int cont = 0;
    int k = 0;
 
    for (int i = 0; i  < n; i++) {
        int a;
        for (int j = 0; j < 3; j++) {
            cin >> a;
            if (a==1)k++;
        }
        if (k > 1) cont++;
        k = 0;
    }
 
    cout << cont;
}