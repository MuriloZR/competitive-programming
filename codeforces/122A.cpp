#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin >>n;
 
    int lucky[] = {47, 74, 447, 474, 477, 747, 774};
 
    if (n % 4 == 0) cout << "YES" << '\n';
    else if (n % 7 == 0) cout << "YES" << '\n';
    else {
        for (int i = 0; i < 7; i++) {
            if (n % lucky[i] == 0) {
                cout << "YES" << '\n';
                return 0;
            }
        }
 
        cout << "NO" << '\n';
    }
}