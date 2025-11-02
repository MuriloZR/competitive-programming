#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
 
    for (int i = 0; i < t; i++) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<int> a(n);
        vector<int> b(m);
        int cont = 0;
        
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if (a[j] < y) cont ++;
        }
 
        for (int j = 0; j < m; j++) {
            cin >> b[j];
            if (b[j] < x) cont++;
        }
 
        cout << cont << endl;
 
    }
}