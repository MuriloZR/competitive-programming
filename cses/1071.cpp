#include <bits/stdc++.h>

#define rv(v) for(auto& i : v) cin >> i
#define EPS 1e-9
#define MOD 1e9 + 7

using namespace std;

//not ready yet
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--)
    {
        int y, x; cin >> y >> x;
        unsigned long long n = 1+(max(x,y)-1)*(max(x,y));
        if ((x-1)%2==0)
        cout << n << endl;
    }
}