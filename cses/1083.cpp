#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    set<int> a;
    for (int i = 0; i < n-1; i++) {
        int c; cin >> c;
        a.insert(c);
    }

    for (int i = 1; i <= n; i++) {
        if (!a.count(i)) {
            cout << i << endl;
        }
    }
}