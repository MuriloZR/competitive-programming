#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
#define MAXK 11
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3fLL
#define ii pair<ll, ll>
#define piii pair<ll, ii>

ll n, m, k;
vector<pair<ll, ll>> g[MAXN];
ll d[MAXN][MAXK];

ll dijkstra() {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            d[i][j] = INF;
        }
    }
    d[1][0] = 0;
    priority_queue<piii, vector<piii>, greater<piii>> q;
    q.push({0, {1, 0}}); // distancia 0 pra ir ao vertice 1 usando 0 links
    while (!q.empty()) {
        auto [dd, v] = q.top(); q.pop();

        if (v.first == n) return dd;
        
        if (dd > d[v.first][v.second]) continue;

        for (auto edge : g[v.first]) {
            ii viz = edge.second < 0 ? ii(edge.first, v.second+1) : ii(edge.first, v.second);
            ll dist = abs(edge.second);

            if (viz.second <= k && d[viz.first][viz.second] > dist + dd) {
                d[viz.first][viz.second] = dist + dd;
                q.push({d[viz.first][viz.second], viz});
            }
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    ll a, b, c, d;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c >>d;
        g[a].push_back({b, c});
        g[b].push_back({a, c});
        if (d != -1) {
            g[a].push_back({b, -d});
            g[b].push_back({a, -d});
        }
    }

    cout << dijkstra() << endl;
}
