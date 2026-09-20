#include <bits/stdc++.h>
using namespace std;

int FATORES(int vet[], int n, int* x) {
    int qtd = 0;
    int divisor = 2;

    while (n > 1) {
        while (n % divisor == 0) {
            vet[qtd] = divisor;
            qtd++;
            n = n / divisor;
        }
        divisor++;
    }

    *x = qtd;

    if (qtd > 10)
        return 1;
    else
        return 0;
}

int main() {
    int vet[100];
    int n;
    int qtdFatores;
    int resultado;

    cout << "Digite um numero inteiro para decompor em fatores primos: ";
    cin >> n;

    resultado = FATORES(vet, n, &qtdFatores);

    cout << "\nQuantidade de fatores primos encontrados: " << qtdFatores
         << "\n";
    cout << "Fatores primos: ";
    for (int i = 0; i < qtdFatores; i++) {
        cout << vet[i];
        if (i < qtdFatores - 1) cout << " x ";
    }
    cout << "\n";

    cout << "Retorno da funcao FATORES: " << resultado << "\n";

    return 0;
}
