#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    int size = 0;
    int lgst = size;
    char prev = *s.begin();
    for (auto c : s) {
        if (c == prev) size++;
        else size = 1;

        if (size > lgst) lgst = size;
        prev = c;
    }

    cout << lgst << endl;
}