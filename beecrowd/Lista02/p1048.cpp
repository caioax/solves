// problem: 1048 - Aumento de Salário

#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, ns, rj;
    int per;
    cin >> x;

    if ((x >= 0) && (x <= 400)) {
        ns = x * 1.15;
        per = 15;
    } else if ((x > 400) && (x <= 800)) {
        ns = x * 1.12;
        per = 12;
    } else if ((x > 800) && (x <= 1200)) {
        ns = x * 1.10;
        per = 10;
    } else if ((x > 1200) && (x <= 2000)) {
        ns = x * 1.07;
        per = 7;
    } else if (x > 2000) {
        ns = x * 1.04;
        per = 4;
    }

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << ns << endl;
    cout << "Reajuste ganho: " << (ns - x) << endl;
    cout << "Em percentual: " << per << " %" << endl;

    return 0;
}
