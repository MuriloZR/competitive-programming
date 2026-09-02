#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> parent;
    UnionFind(int N) {
        parent.resize(N + 1);
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]); // Compressão de caminho
    }

    void unionSet(int i, int j) {
        int x = find(i), y = find(j);
        if (x != y) parent[x] = y;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    UnionFind dsu(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        dsu.unionSet(u, v);
    }

    vector<int> lideres;
    for (int i = 1; i <= n; i++) {
        if (dsu.find(i) == i) {
            lideres.push_back(i);
        }
    }

    int k = lideres.size() - 1;
    cout << k << '\n';

    for (int i = 0; i < k; i++) {
        cout << lideres[i] << ' ' << lideres[i + 1] << '\n';
    }

    return 0;
}