#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n; cin >> n;
 
    string s;
 
    int x = 0;
 
    for (int i = 0; i < n; i++) {
        cin >>s;
        if (s == "X++" || s == "++X") x++;
        else if (s == "X--" || s == "--X") x--;
 
    }
 
    cout << x;
}