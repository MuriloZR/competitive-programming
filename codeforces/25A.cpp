#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n{};
 
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
 
    vector<int> even;
    vector<int> uneven;
    for (int i = 0; i < n; i++) {
        if (vec[i] % 2 == 0) {
            even.push_back(i+1);
        } else {
            uneven.push_back(i+1);
        }
    }
 
    if (uneven.size() == 1) {
        cout << uneven[0] << '\n';
    }
    else if (even.size() == 1) {
        cout << even[0] << '\n';
    }
}