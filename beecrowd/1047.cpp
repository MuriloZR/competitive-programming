#include <bits/stdc++.h>

using namespace std;

int main() {
    int hc, mc, hf, mf;

    cin >> hc >> mc >> hf >> mf;

    int diff;
    if (hc < hf) diff = (hf*60 + mf) - (hc*60 + mc);

    if (hc > hf) diff = 1440 - (hc*60 + mc) + (hf*60 + mf);

    if (hc == hf) diff = mf - mc;
    
    if (hc == hf && mc == mf) diff = 1440;
    
    if (diff < 0) diff += 1440;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diff/60, diff%60);
}