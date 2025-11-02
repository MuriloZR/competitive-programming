#include <bits/stdc++.h>

using namespace std;

set<int> scores;
bool valid;
vector<int> c;
int n, m;

void generate(vector<int>& positions, int pos) {
    if (pos == n) {
        int score = 0;
        for (int i = 0; i < n; i++) {
            score += c[i] * positions[i];
        }
        
        if (scores.count(score)) {
            valid = false;
            return;
        }
        scores.insert(score);
        return;
    }
    
    if (!valid) return;
    
    for (int rank = 1; rank <= m; rank++) {
        positions[pos] = rank;
        generate(positions, pos + 1);
        if (!valid) return;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while (cin >> n >> m) {
        c.resize(n);
        for (auto& i : c) cin >> i;
        
        scores.clear();
        valid = true;
        
        vector<int> positions(n);
        generate(positions, 0);
        
        if (valid) {
            cout << "Lucky Denis!" << endl;
        } else {
            cout << "Try again later, Denis..." << endl;
        }
    }
    
    return 0;
}