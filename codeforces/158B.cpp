#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n{};
    cin >> n;
 
    vector<int> vec(n);
    int n4{0}, n3{0}, n2{0}, n1{0};
 
    for (int i = 0; i < n; i++)  {
        cin >> vec[i];
        if (vec[i] == 4) n4++;
        if (vec[i] == 3) n3++;
        if (vec[i] == 2) n2++;
        if (vec[i] == 1) n1++;
    }
 
    int taxis{0};
    taxis += n4;
 
    while (n3 != 0 && n1 != 0) {
        taxis++;
        n3--;
        n1--;
    }
 
    while (n3 > 0) {
        taxis++;
        n3--;
    }
 
    while ( n2 >= 2 ) {
        n2 -= 2;
        taxis++;
    }
 
        if (n2 == 1 && n1 >= 2) {
            taxis++;
            n2--;
            n1 -= 2;
        }
        if (n2 == 1 && n1 == 1) {
            taxis++;
            n2--;
            n1--;
        }
        if (n2 == 1) {
            taxis ++;
            n2--;
        }
 
    while (n1 >= 4) {
        n1 -= 4;
        taxis++;
    }
    if (n1 < 4 && n1 != 0) {
        taxis++;  
    }
    cout << taxis << '\n';
}