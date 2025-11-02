#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin>>n;
 
    unordered_map<string, int> database;
    while (n--) {
        string s;
        cin >> s;
        if (database.count(s)) {
            char c[10];
            sprintf(c, "%d", database[s]);
            cout << s << c << '\n';
        }
        else {
            cout << "OK" << '\n';
        }
        database[s]++;
    }
 
 
}