#include <bits/stdc++.h>
using namespace std;

struct Competidor {
    int codigo;
    string nome;
    int minutos;
    int segundos;
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

vector<Competidor> SelectionSort(vector<Competidor> vet, int tam, string id) {
    int i, j, min;

    if (id == "nome") {
        for (i = 0; i < (tam - 1); i++) {
            min = i;
            for (j = (i + 1); j < tam; j++) {
                if (vet[j].nome < vet[min].nome) {
                    min = j;
                }
            }

            if (i != min) {
                Competidor v = vet[i];
                vet[i] = vet[min];
                vet[min] = v;
            }
        }
    } else if (id == "codigo") {
        for (i = 0; i < (tam - 1); i++) {
            min = i;
            for (j = (i + 1); j < tam; j++) {
                if (vet[j].codigo < vet[min].codigo) {
                    min = j;
                }
            }

            if (i != min) {
                Competidor v = vet[i];
                vet[i] = vet[min];
                vet[min] = v;
            }
        }
    } else if (id == "tempo") {
        for (i = 0; i < (tam - 1); i++) {
            min = i;
            for (j = (i + 1); j < tam; j++) {
                if ((vet[j].minutos * 60) + (vet[j].segundos) <
                    (vet[min].minutos * 60) + (vet[min].segundos)) {
                    min = j;
                }
            }

            if (i != min) {
                Competidor v = vet[i];
                vet[i] = vet[min];
                vet[min] = v;
            }
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
    cout << "1: Registrar competidores\n";
    cout << "2: Exibir por código\n";
    cout << "3: Exibir por nome\n";
    cout << "4: Exibir por tempo\n";
    cout << "5: Sair\n";
    cout << "--------------------------------------\n";
    return Ask();
}

void PrintCompetidor(Competidor v) {
    cout << "--------------------------------------\n";
    cout << "Nome: " << v.nome << "\n";
    cout << "Código: " << v.codigo << "\n";
    cout << "Tempo: " << v.minutos << ":" << v.segundos << "\n";
    cout << "--------------------------------------\n";
}

void AddCompetidores(vector<Competidor>& vet) {
    clear();

    for (int i = 0; i < 10; i++) {
        cout << "--------------------------------------\n";
        cout << "Adicionando competidor " << i + 1 << "\n";
        cout << "--------------------------------------\n";
        Competidor v;
        cout << "Nome: ";
        cin >> v.nome;
        cout << "Código: ";
        cin >> v.codigo;
        cout << "Minutos: ";
        cin >> v.minutos;
        cout << "Segundos: ";
        cin >> v.segundos;

        vet.push_back(v);
        clear();
        cout << "Competidor adicionado com sucesso:\n";
        PrintCompetidor(v);
        endPag();
        clear();
    }
    clear();
    cout << "\n--------------------------------------\n";
    cout << "Todos os 10 competidores adicionados com sucesso!\n";
    cout << "--------------------------------------\n";
    endPag();
}

void Exibir(vector<Competidor>& vet, string id) {
    clear();
    vector<Competidor> nv = SelectionSort(vet, vet.size(), id);

    if (!(int)nv.size()) {
        cout << "Nada econtrado :(\n";
    } else {
        for (Competidor v : nv) {
            PrintCompetidor(v);
        }
    }
    endPag();
}

void ValorInvalido() {
    cout << "!!!!Valor inválido!!!!\n";
    endPag();
}

int main() {
    vector<Competidor> vet;
    bool loop = true;
    while (loop) {
        clear();
        string s = MainMenu();

        if (s == "1") {
            AddCompetidores(vet);
        } else if (s == "2") {
            Exibir(vet, "codigo");
        } else if (s == "3") {
            Exibir(vet, "nome");
        } else if (s == "4") {
            Exibir(vet, "tempo");
        } else if (s == "5") {
            loop = false;
        } else {
            ValorInvalido();
        }
    }
    return 0;
}
