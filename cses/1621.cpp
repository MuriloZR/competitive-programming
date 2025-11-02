#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    set<int> s;
    int n;
    int v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v;
        s.insert(v);
    }
 
    cout << s.size() << endl;
}