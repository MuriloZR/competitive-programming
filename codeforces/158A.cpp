#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n; cin >> n;
    int k; cin >> k;
 
    vector<int> v(n);
 
    int cont{};
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    for (int i = 0; i < n; i++) {
        if (v[i] > 0 && v[i] >= v[k-1]) {
            cont++;
        }
    }
 
    cout << cont;
}