#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    unsigned long long n, m ,a, x = 1, y = 1;cin>>n>>m>>a;
    
    cout << (n/a + (n%a!=0?1:0)) * (m/a + (m%a!=0?1:0)) << '\n';   
}