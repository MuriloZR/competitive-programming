#include <bits/stdc++.h>

using namespace std;

int main() {
    int l, c; cin >> l >> c;

    int tam = l*c;

    int dinheiros = 0;
    int totalblocos = 0;
    int qtdniveis = 0;

    vector<int> terr(tam);

    for (int i = 0; i < tam; i++) {
        cin >> terr[i];
        totalblocos+=terr[i];
    }

    sort(terr.begin(), terr.end());

    int media = totalblocos/tam;

    if (totalblocos%tam == 0) {
        int movidos = 0;
        for (int i = 0; i < tam; i++) {
            if (terr[i] < media) {
                movidos += (media - terr[i]);
            }
        }
        dinheiros = 10 * movidos;
        qtdniveis = 1;
    }
    else {
        int sla = tam - (totalblocos - (tam*media));
        int qtdmovida = 0;
        for (int i = 0; i < sla; i++) {
            if (terr[i] < media) {
                (qtdmovida += media - terr[i]);
            }
        }
        for (int i = sla; i < tam; i++) {
            if (terr[i] < media + 1) {
                qtdmovida += (media + 1 - terr[i]);
            }
        }
        dinheiros += qtdmovida * 10;
        qtdniveis = 2;
    }

    cout << dinheiros << ' ' << qtdniveis << endl;
}