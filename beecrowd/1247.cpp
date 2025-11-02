#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    float d, vf, vg;
    while (cin >> d >> vf >> vg) {
        float tf = 12/vf;
        float tg = sqrt(12*12 + d*d)/vg;
        cout << ((tf >= tg)?'S':'N') << endl;
    }

}
