#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    string s1, s2;
    cin >> s1 >> s2;
    
    transform(s1.begin(), s1.end(), s1.begin(), [](unsigned char c){return tolower(c);});
    transform(s2.begin(), s2.end(), s2.begin(), [](unsigned char c){return tolower(c);});
 
    auto is1 = s1.begin();
    auto is2 = s2.begin();
    while (is1 != s1.end())
    {
        if (*is1 > *is2) {
            cout << "1\n";
            return 0;
        }
        else if (*is1 < *is2) {
            cout << "-1\n";
            return 0;
        }
        is1++;
        is2++;
    }
    cout << "0\n";
}