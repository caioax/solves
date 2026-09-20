#include <bits/stdc++.h>
using namespace std;

struct Veiculo {
    int ano;
    string marca;
    string placa;
    int estoque;
};

void clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void endPag() {
    cout << "Aperte Enter para continuar: ";
    cin.ignore();
    cin.get();
}

vector<Veiculo> InsertionSort(vector<Veiculo> vet, int tam, string id) {
    int j;

    if (id == "ano") {
        int eleito;
        Veiculo veiculo;
        for (int i = 0; i < tam; i++) {
            eleito = vet[i].ano;
            veiculo = vet[i];
            j = i - 1;
            while ((j >= 0) && (eleito < vet[j].ano)) {
                vet[j + 1] = vet[j];
                j--;
            }
            vet[j + 1] = veiculo;
        }
    } else if (id == "marca") {
        string eleito;
        Veiculo veiculo;
        for (int i = 0; i < tam; i++) {
            eleito = vet[i].marca;
            veiculo = vet[i];
            j = i - 1;
            while ((j >= 0) && (eleito < vet[j].marca)) {
                vet[j + 1] = vet[j];
                j--;
            }
            vet[j + 1] = veiculo;
        }
    } else if (id == "placa") {
        string eleito;
        Veiculo veiculo;
        for (int i = 0; i < tam; i++) {
            eleito = vet[i].placa;
            veiculo = vet[i];
            j = i - 1;
            while ((j >= 0) && (eleito < vet[j].placa)) {
                vet[j + 1] = vet[j];
                j--;
            }
            vet[j + 1] = veiculo;
        }
    } else if (id == "estoque") {
        int eleito;
        Veiculo veiculo;
        for (int i = 0; i < tam; i++) {
            eleito = vet[i].estoque;
            veiculo = vet[i];
            j = i - 1;
            while ((j >= 0) && (eleito < vet[j].estoque)) {
                vet[j + 1] = vet[j];
                j--;
            }
            vet[j + 1] = veiculo;
        }
    }
    return vet;
}

string Ask() {
    cout << "Digite aqui: ";
    string s;
    cin >> s;
    return s;
}

string MainMenu() {
    cout << "--------------------------------------\n";
    cout << "1: Exibir por ano\n";
    cout << "2: Exibir por marca\n";
    cout << "3: Exibir pelo numero da placa\n";
    cout << "4: Exibir por quantidade em estoque\n";
    cout << "5: Adicionar automóvel\n";
    cout << "6: Sair\n";
    cout << "--------------------------------------\n";
    return Ask();
}

void PrintVeiculo(Veiculo v) {
    cout << "--------------------------------------\n";
    cout << "Ano: " << v.ano << "\n";
    cout << "Marca: " << v.marca << "\n";
    cout << "Placa: " << v.placa << "\n";
    cout << "Estoque: " << v.estoque << "\n";
    cout << "--------------------------------------\n";
}

void AddVeiculo(vector<Veiculo>& vet) {
    clear();
    Veiculo v;
    cout << "Ano: ";
    cin >> v.ano;
    cout << "Marca: ";
    cin >> v.marca;
    cout << "Placa: ";
    cin >> v.placa;
    cout << "Estoque: ";
    cin >> v.estoque;

    vet.push_back(v);
    clear();
    cout << "Veículo adicionado com sucesso:\n";
    PrintVeiculo(v);
    endPag();
}

void Exibir(vector<Veiculo>& vet, string id) {
    clear();
    vector<Veiculo> nv = InsertionSort(vet, vet.size(), id);

    if (!(int)nv.size()) {
        cout << "Nada econtrado :(\n";
    } else {
        for (Veiculo v : nv) {
            PrintVeiculo(v);
        }
    }
    endPag();
}

void ValorInvalido() {
    cout << "!!!!Valor inválido!!!!\n";
    endPag();
}

int main() {
    vector<Veiculo> vet;
    bool loop = true;
    while (loop) {
        clear();
        string s = MainMenu();

        if (s == "1") {
            Exibir(vet, "ano");
        } else if (s == "2") {
            Exibir(vet, "marca");
        } else if (s == "3") {
            Exibir(vet, "placa");
        } else if (s == "4") {
            Exibir(vet, "estoque");
        } else if (s == "5") {
            AddVeiculo(vet);
        } else if (s == "6") {
            loop = false;
        } else {
            ValorInvalido();
        }
    }
    return 0;
}
