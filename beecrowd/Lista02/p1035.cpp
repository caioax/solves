// problem: 1035 - Teste de Seleção 1

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if ((b > c) && (d > a) && (c > 0) && (d > 0) && (a % 2 == 0) &&
        ((c + d) > (a + b))) {
        cout << "Valores aceitos" << endl;
        return 0;
    }

    cout << "Valores nao aceitos" << endl;

    return 0;
}
