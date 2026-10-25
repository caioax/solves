#include <bits/stdc++.h>
using namespace std;

int pesquisaSequencial(vector<int> &vet, int tam, int dado) {

    int i;
    for (i = 0; i < tam; i++)

        if (vet[i] == dado)

            return (i);

    return (0);
}

void QuickSort(vector<int> &vet, int esq, int dir) {
    int i = esq, j = dir;
    char x, y;
    x = vet[(esq + dir) / 2];

    do {
        while ((vet[i] < x) && (i < dir))
            i++;
        while ((x < vet[j]) && (j > esq))
            j--;
        if (i <= j) {
            y = vet[i];
            vet[i] = vet[j];
            vet[j] = y;
            i++;
            j--;
        }
    } while (i <= j);
    if (esq < j)
        QuickSort(vet, esq, j);
    if (i < dir)
        QuickSort(vet, i, dir);
}

int main() {
    cout << "--------------------------------\n";
    cout << "Digite 5 numeros: ";
    vector<int> vet(5);
    for (int i = 0; i < 5; i++) {
        cin >> vet[i];
    }
    cout << "Digite seu alvo: ";
    int alvo;
    cin >> alvo;
    cout << "--------------------------------\n";

    QuickSort(vet, 0, 4);

    cout << 1 + pesquisaSequencial(vet, 5, alvo) << "\n";
    return 0;
}
