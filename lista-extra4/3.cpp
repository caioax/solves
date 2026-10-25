#include <bits/stdc++.h>
using namespace std;

vector<int> pesquisaSequencial(vector<int> &vet, int tam, int dado) {
    int i;
    vector<int> posicoes(0);
    for (i = 0; i < tam; i++)
        if (vet[i] == dado)
            posicoes.push_back(i + 1);

    return posicoes;
}

int main() {
    cout << "--------------------------------\n";
    cout << "Digite o tamanho do vetor: ";
    int n;
    cin >> n;
    cout << "--------------------------------\n";
    cout << "Digite os " << n << " numeros do vetor: ";
    vector<int> vet(n);
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }
    cout << "--------------------------------\n";
    cout << "Digite o alvo: ";
    int alvo;
    cin >> alvo;
    cout << "--------------------------------\n";
    vector<int> posicoes = pesquisaSequencial(vet, n, alvo);
    cout << (int)posicoes.size() << " ocorrencias do alvo " << alvo << "\n";
    cout << "posicoes = {";
    for (int i = 0; i < (int)posicoes.size(); i++) {
        if (i)
            cout << ", ";
        cout << posicoes[i];
    }
    cout << "}\n";

    return 0;
}
