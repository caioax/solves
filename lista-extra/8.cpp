#include <bits/stdc++.h>
using namespace std;
struct Investimentos {
    double capInicial;
    double juros;
    int periodo;
};

double montanteFinal(Investimentos inv) {
    return inv.capInicial * pow(1 + inv.juros, inv.periodo);  //
}

int main() {
    Investimentos inv;
    cin >> inv.capInicial >> inv.juros >> inv.periodo;
    cout << fixed << setprecision(2);
    cout << "Montante final: " << montanteFinal(inv) << "\n";
    return 0;
}
