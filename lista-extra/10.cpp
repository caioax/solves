#include <bits/stdc++.h>
using namespace std;

struct Contato {
    string nome;
    string telefone;
    string email;
};

vector<Contato> lista;

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

string mainMenu() {
    cout << "Menu inicial:\n";
    cout << "----------------------------------\n";
    cout << "1 - Registrar novo contato.\n";
    cout << "2 - Pesquisar contato.\n";
    cout << "3 - Apagar contato.\n";
    cout << "4 - Listar todos os contatos.\n";
    cout << "5 - Sair\n";
    cout << "----------------------------------\n";
    cout << "Digite um numero: ";
    string resposta;
    cin >> resposta;
    return resposta;
}

void contatoInfos(Contato contato) {
    cout << "----------------------------------\n";
    cout << "Nome: " << contato.nome << "\n";
    cout << "Telefone: " << contato.telefone << "\n";
    cout << "E-mail: " << contato.email << "\n";
    cout << "----------------------------------\n\n";
}

void registrarContatoPag() {
    Contato newContato;
    cout << "Registrar novo contato:\n";
    cout << "----------------------------------\n";
    cout << "Nome: ";
    cin >> newContato.nome;
    cout << "Telefone: ";
    cin >> newContato.telefone;
    cout << "E-mail: ";
    cin >> newContato.email;
    clear();
    lista.push_back(newContato);
    cout << "Novo contato adicionado com sucesso!\n";
    contatoInfos(newContato);
    endPag();
}

void pesquisarContatoPag() {
    string nome;
    cout << "Nome: ";
    cin >> nome;

    clear();
    bool achou = false;
    for (Contato c : lista) {
        if (c.nome == nome) {
            contatoInfos(c);
            achou = true;
        }
    }
    if (!achou) {
        cout << "----------------------------------\n";
        cout << "Nada encontrado :(\n";
        cout << "----------------------------------\n\n";
    }
    endPag();
}

void apagarContatoPag() {
    string nome;
    cout << "Nome: ";
    cin >> nome;

    clear();
    bool achou = false;
    for (int i = 0; i < (int)lista.size(); i++) {
        if (lista[i].nome == nome) {
            lista.erase(lista.begin() + i);
            achou = true;
            break;
        }
    }
    if (!achou) {
        cout << "----------------------------------\n";
        cout << "Nao ha contatos com esse nome\n";
        cout << "----------------------------------\n\n";
    } else {
        cout << "----------------------------------\n";
        cout << "Contato apagado com sucesso!\n";
        cout << "----------------------------------\n\n";
    }
    endPag();
}

void listarTodosContatosPag() {
    clear();
    for (Contato c : lista) {
        contatoInfos(c);
    }
    endPag();
}

int main() {
    bool mainLoop = true;
    while (mainLoop) {
        clear();
        string r1 = mainMenu();
        clear();

        if (r1 == "1") {
            registrarContatoPag();
        } else if (r1 == "2") {
            pesquisarContatoPag();
        } else if (r1 == "3") {
            apagarContatoPag();
        } else if (r1 == "4") {
            listarTodosContatosPag();
        } else if (r1 == "5") {
            mainLoop = false;
        }
    }
    return 0;  //
}
