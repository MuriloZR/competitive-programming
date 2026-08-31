#include <bits/stdc++.h>

#define rv(v) for (auto &i : v) cin >> i
#define fori(i, a) for (int i{}; i < a; i++)

using namespace std;
using ll = long long;
using ull = unsigned long long;
using ii = pair<int, int>;

constexpr double EPS {1e-9};
constexpr ll MOD {1000000007};
constexpr ll MODW {998244353};

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

bool val(vector<vector<char>> &g, int r, int c) {
    return r >= 0 && r < g.size() && c >= 0 && c < g[r].size() && g[r][c] != '#';
}

bool bfs_grid(vector<vector<char>> &g, int vr, int vc, vector<vector<int>> &dist, vector<vector<ii>> &prev) {
    queue<ii> q;
    vector<vector<bool>> vis(g.size(), vector<bool>(g[0].size()));
    vis[vr][vc] = true;
    dist[vr][vc] = 0;
    q.push({vr, vc});
    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop();
        fori(i, 4) {
            int nr = r + dr[i], nc = c + dc[i];
            if (val(g, nr, nc) && !vis[nr][nc]) {
                vis[nr][nc] = true;
                dist[nr][nc] = dist[r][c] + 1;
                prev[nr][nc] = {r, c};
                if (g[nr][nc] == 'B') return true;
                q.push({nr, nc});
            }
        }
    }

    return false;
}

string caminho(const vector<vector<ii>> &prev, const ii &a, const ii &b) {
    string s{};
    int i{b.first}, j{b.second};
    while (ii(i, j) != a) {
        int i_prev = prev[i][j].first;
        int j_prev = prev[i][j].second;

        if (i > i_prev) s += "D";
        else if (i < i_prev) s += "U";
        else if (j > j_prev) s += "R";
        else if (j < j_prev) s += "L";

        i = i_prev;
        j = j_prev;
    }

    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<char>> g(n, vector<char>(m));
    vector<vector<int>> vis(n, vector<int>(m));
    vector<vector<ii>> prev(n, vector<ii>(m));
    ii a, b;
    for (int i = 0; i < n; i++) {
        for (int j{}; j < m; j++) {
            cin >> g[i][j];
            if (g[i][j] == 'A') a = {i, j};
            if (g[i][j] == 'B') b = {i, j};
        }
    }

    auto achou = bfs_grid(g, a.first, a.second, vis, prev);

    if (achou) {
        auto s = caminho(prev, a, b);
        reverse(s.begin(), s.end());
        cout << "YES" << endl;
        cout << vis[b.first][b.second] << endl;
        cout << s << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
