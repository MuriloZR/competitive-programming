#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> ni(n);
    vector<int> mi(m);
    
    for (int i = 0; i < n; i++) {
        cin >> ni[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> mi[i];
    }

    int dist = 0;
    vector<int>::iterator it0 = ni.begin();
    vector<int>::iterator it1;
    for (int i = 0; i < m; i++) {
        it1 = find(ni.begin(), ni.end(), mi[i]);
        int aux = distance(it0, it1);
        if (aux >= 0) dist += aux;
        else dist -= aux;
        it0 = it1;
    }

    printf("%d\n", dist);
}