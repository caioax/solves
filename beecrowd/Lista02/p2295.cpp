// problems: 2295 - Frota de Táxi

#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, g, ra, rg, da, dg;
    cin >> a >> g >> ra >> rg;

    da = ra / a;
    dg = rg / g;

    if (da > dg) {
        cout << "A" << endl;
        return 0;
    }

    cout << "G" << endl;
    return 0;
}
