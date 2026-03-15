#include <bits/stdc++.h>

#define rv(v) for(auto& i : v) cin >> i

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, res{}; cin >> n;
    vector<int> v(n);
    rv(v);
    for (int i = 0; i < n-1; i++) {
        if (v[i] > v[i+1]) {
            res += (v[i] - v[i+1]);
            v[i+1] = v[i];
        }
    }

    cout << res << endl;
}