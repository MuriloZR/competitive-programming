#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nc;
    cin >> nc;
    vector<vector<int>> resp;
    for (int i = 0; i < nc; i++) {
        int n;
        cin >> n;
        vector<int> h(n);
        for (int j = 0; j < n; j++) {
            cin >> h[j];
        }

        sort(h.begin(), h.end());
        resp.push_back(h);
    }

    for (int i = 0; i < nc; i++) {
        int tam = resp[i].size();
        printf("%d", resp[i][0]);
        for (int j = 1; j < tam; j++) {
            printf(" %d", resp[i][j]);
        }
        printf("\n");
    }
}