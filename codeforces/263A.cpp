#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    int ri, rj;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> n;
            if (n == 1) {
                ri = i;
                rj = j;
                break;
            }
        }
    }
 
    cout << abs(2-ri) + abs(2-rj) << endl;
}