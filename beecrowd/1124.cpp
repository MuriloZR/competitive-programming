#include <bits/stdc++.h>

using namespace std;

#define sq(a) ((a)*(a))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double l, c, r1, r2;
    while (cin >> l >> c >> r1 >> r2) {
        if (l == 0 && c == 0 && r1 == 0 && r2 == 0) return 0;

        cout << (max(2*r1, 2*r2) <= min(l, c) && sqrt(sq(l-r1-r2)+sq(c-r1-r2)) >= r1+r2 ? 'S' : 'N') << endl;
    }
}