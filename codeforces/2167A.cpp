#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    while (n--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (a == b && b == c && c == d?"YES":"NO") << endl;
    }
}