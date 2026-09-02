#include <bits/stdc++.h>
using namespace std;

#define MAXN 100'000
#define INF 0x3f3f3f3f

vector<int> g[MAXN+1];
vector<bool> vis(MAXN+1, false);
vector<int> dist(MAXN+1, INF);
vector<int> pre(MAXN+1, 0);

bool bfs(int a, int b) {
    queue<int> q;
    vis[a] = true;
    dist[a] = 0;
    q.push(a);

    while (!q.empty()) {
        int i = q.front(); q.pop();
        for (auto v : g[i]) {
            if (!vis[v]) {
                vis[v] = true;
                dist[v] = dist[i] + 1;
                pre[v] = i;
                if (v == b) return true;
                q.push(v);
            }
        }
    }
    return false;
}

string s_path(int a, int b) {
    string s{}, aux;
    aux = to_string(b);
    reverse(aux.begin(), aux.end());
    s += aux + ' ';
    while (pre[b] != a) {
        aux = to_string(pre[b]);
        reverse(aux.begin(), aux.end());
        s += aux + ' ';
        b = pre[b];
    }
    s += to_string(a);

    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    auto achou = bfs(1, n);

    if (achou) {
        auto caminho = s_path(1, n);
        cout << dist[n]+1 << '\n';
        cout << caminho << '\n';
    }
    else {
        cout << "IMPOSSIBLE\n";
    }
}
