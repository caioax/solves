#include <bits/stdc++.h>
using namespace std;

bool Cabe(vector<int> &vet, int carga, int caminhoes) {
    int usados = 1, atual = 0;
    for (int i = 0; i < (int)vet.size(); i++) {
        if (vet[i] > carga)
            return false;
        if (atual + vet[i] > carga) {
            usados++;
            atual = 0;
        }
        atual += vet[i];
    }
    return usados <= caminhoes;
}

int BinarySearch(vector<int> &vet, int caminhoes, int inic, int fim) {
    if (inic >= fim)
        return inic;

    int meio = inic + (fim - inic) / 2;

    if (Cabe(vet, meio, caminhoes))
        return BinarySearch(vet, caminhoes, inic, meio);
    else
        return BinarySearch(vet, caminhoes, meio + 1, fim);
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int p, c, f;
        cin >> p >> c >> f;

        vector<int> paineis(p);
        int soma = 0;
        for (int i = 0; i < p; i++) {
            cin >> paineis[i];
            soma += paineis[i];
        }

        int carga = BinarySearch(paineis, c, 1, soma);

        cout << carga << " $" << carga * c * f << "\n";
    }

    return 0;
}
