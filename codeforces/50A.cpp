#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n; cin >> n;
    int m; cin >> m;
 
    int a = m*n;
 
    int cont{};
 
    while (a > 1)
    {
        a-=2;
        cont++;
    }
    
    
 
    cout << cont;
}