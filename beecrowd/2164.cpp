#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n; cin >> n;
    double res = (pow((1+sqrt(5))/2, n)-pow((1-sqrt(5))/2, n))/sqrt(5);
    
    cout << setprecision(1) << fixed << res << endl;
}