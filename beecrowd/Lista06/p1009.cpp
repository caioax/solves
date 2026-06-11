// problem: 1009 - Salário com Bônus

#include <bits/stdc++.h>
using namespace std;

int main() {
    string nome;
    double s, c, r;
    cin >> nome >> s >> c;
    r = s + c * 0.15;
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << r << endl;

    return 0;
}
