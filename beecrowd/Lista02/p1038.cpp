// problem: 1038 - Lanche

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<double> precos = {4.00, 4.50, 5.00, 2.00, 1.50};
    int id, quantidade;
    double preco;

    cin >> id >> quantidade;

    preco = quantidade * precos[id - 1];

    cout << fixed << setprecision(2);
    cout << "Total: R$ " << preco << endl;

    return 0;
}
