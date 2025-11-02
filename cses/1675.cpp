#include <bits/stdc++.h>
 
using namespace std;
 
const unsigned long long INF = 1000000000000000000;
 
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<pair<int, int>>> roads(n+1);
    
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        roads[a].push_back({b, c});
        roads[b].push_back({a, c});
    }
 
    unsigned long long total_weight = 0;
    
    vector<pair<int, int>> min_e(n+1, {INT_MAX, -1});
    min_e[1].first = 0;
    
    set<pair<int, int>> q;
    q.insert({0, 1});
    
    vector<bool> selected(n+1, false);
    
    for (int i = 1; i <= n; i++) {
        if (q.empty()) {
            cout << "IMPOSSIBLE\n";
            return 0;
        }
 
        int v = q.begin()->second;
        selected[v] = true;
        total_weight += q.begin()->first;
        q.erase(q.begin());
 
        for (auto [to, peso] : roads[v]) {
            if (!selected[to] && peso < min_e[to].first) {
                q.erase({min_e[to].first, to});
                min_e[to] = {peso, v};
                q.insert({peso, to});
            }
        }
    }
 
    cout << total_weight << endl;
}