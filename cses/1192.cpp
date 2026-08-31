#include <bits/stdc++.h>

#define rv(v) for (auto &i : v) cin >> i
#define fori(i, a) for (int i{}; i < a; i++)

using namespace std;
using ll = long long;
using ull = unsigned long long;

constexpr double EPS {1e-9};
constexpr ll MOD {1000000007};
constexpr ll MODW {998244353};

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

bool val(vector<vector<char>> &g, int r, int c) {
    return r >= 0 && r < g.size() && c >= 0 && c < g[0].size() && g[r][c] != '#';
}

void dfs_grid(vector<vector<char>> &g, int r, int c, vector<vector<bool>> &vis) {
    vis[r][c] = true;
    fori(i, 4) {
        int nr = r + dr[i], nc = c + dc[i];
        if (val(g, nr, nc) && !vis[nr][nc]) {
            dfs_grid(g, nr, nc, vis);
            g[nr][nc] = '#';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<vector<char>> g(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m));
    for (int i = 0; i < n; i++) {
        for (int j{}; j < m; j++) {
            cin >> g[i][j];
        }
    }

    int res{};
    for (int i = 0; i < n; i++) {
        for (int j{}; j < m; j++) {
            if (g[i][j] == '.') {
                res++;
                dfs_grid(g, i, j, vis);
            }
        }
    }

    cout << res << endl;
}
